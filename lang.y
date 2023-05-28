%code top{
	#include <bits/stdc++.h>
	#include "lexer.hpp"
	using namespace std;
	void yyerror(char* s);
	int yylex();
}

%code requires{
	#include "mylang.hpp"
}

%union {
	double val;
	char* str;
	Expression* p;
	Commands* c;
	void* none;
}

%code requires {
	#define YYLTYPE YYLTYPE
	typedef struct YYLTYPE
	{
		int first_line;
		int first_column;
		int last_line;
		int last_column;
		char *filename;
	} YYLTYPE;
}

// Terminals
%token<val> TOK_INT
%token<str> TOK_STRING TOK_NAME
%token<none> TOK_ADD TOK_SUB TOK_MUL TOK_DIV TOK_MOD TOK_XOR TOK_CROSS TOK_EQ TOK_GEQ TOK_LEQ TOK_GT TOK_LT TOK_NEQ 
%token<none> TOK_L_BRACKET TOK_R_BRACKET TOK_L_SQUARE TOK_R_SQUARE TOK_L_BRACE TOK_R_BRACE TOK_SEMICOL TOK_COLON 
%token<none> TOK_COMMA TOK_DOT TOK_2DOT TOK_3DOT TOK_ASSIGN 
%token<none> TOK_AND TOK_BREAK TOK_DO TOK_ELSE TOK_ELSEIF TOK_END TOK_FALSE TOK_FOR TOK_FUNCTION TOK_IF 
%token<none> TOK_IN TOK_LOCAL TOK_NIL TOK_NOT TOK_OR TOK_REPEAT TOK_RETURN TOK_THEN TOK_TRUE TOK_UNTIL TOK_WHILE 
%token<none> TOK_COMMENT TOK_EOL

%token<none> TOK_POS TOK_NEG

// Nonterminals
%type<c> PROGRAM
%type<c> CMD
%type<p> EXPR
%type<p> SIMPLE_EXPR
%type<p> FUNC_CALL FUNC_ARGS
%type<p> VAR

// Priority
%left TOK_OR
%left TOK_AND
%left TOK_LT TOK_GT TOK_LEQ TOK_GEQ TOK_NEQ TOK_EQ
%left TOK_2DOT
%left TOK_ADD TOK_SUB
%left TOK_MUL TOK_DIV TOK_MOD
%left TOK_NOT TOK_LEN TOK_POS TOK_NEG
%right TOK_XOR
%left TOK_DOT

%%

PROGRAM : 
	CMD
	{
		$$ = ($1);
		whole_program = $$;
	}
;

CMD :
	EXPR TOK_EOL
	{
		$$ = new Commands($1,nullptr);
	}
|	EXPR TOK_EOL CMD
	{
		$$ = new Commands($1,$3);
	}
;

EXPR :
	SIMPLE_EXPR
	{
		$$ = $1;
	}
	// UnopExpressions
|	TOK_ADD EXPR %prec TOK_POS
	{
		$$ = new UnopExpression(UnopExpression::POS,$2);
	}
|	TOK_SUB EXPR %prec TOK_NEG
	{
		$$ = new UnopExpression(UnopExpression::NEG,$2);
	}
|	TOK_CROSS EXPR
	{
		$$ = new UnopExpression(UnopExpression::LEN,$2);
	}
|	TOK_NOT EXPR
	{
		$$ = new UnopExpression(UnopExpression::NOT,$2);
	}
	// BinopExpressions
|	EXPR TOK_ADD EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::ADD,$3);
	}
|	EXPR TOK_SUB EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::SUB,$3);
	}
|	EXPR TOK_MUL EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::MUL,$3);
	}
|	EXPR TOK_DIV EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::DIV,$3);
	}
|	EXPR TOK_MOD EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::MOD,$3);
	}
|	EXPR TOK_XOR EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::XOR,$3);
	}
|	EXPR TOK_CROSS EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::CROSS,$3);
	}
|	EXPR TOK_EQ EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::EQ,$3);
	}
|	EXPR TOK_GEQ EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::GEQ,$3);
	}
|	EXPR TOK_LEQ EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::LEQ,$3);
	}
|	EXPR TOK_GT EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::GT,$3);
	}
|	EXPR TOK_LT EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::LT,$3);
	}
|	EXPR TOK_NEQ EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::NEQ,$3);
	}
//|	EXPR TOK_DOT EXPR
//	{
//		$$ = new BinopExpression($1,BinopExpression::DOT,$3);
//	}
|	EXPR TOK_2DOT EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::DOT2,$3);
	}
|	EXPR TOK_ASSIGN EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::ASSIGN,$3);
	}
|	EXPR TOK_OR EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::OR,$3);
	}
|	EXPR TOK_AND EXPR
	{
		$$ = new BinopExpression($1,BinopExpression::AND,$3);
	}
	// Bracketed
|	TOK_L_BRACKET EXPR TOK_R_BRACKET
	{
		$$ = $2;
	}
;

SIMPLE_EXPR :
	TOK_INT
	{
		$$ = new Number($1);
	}
|	TOK_STRING
	{
		$$ = new String($1);
	}
|	TOK_NIL
	{
		$$ = new Nil;
	}
|	TOK_TRUE
	{
		$$ = new Boolean(true);
	}
|	TOK_FALSE
	{
		$$ = new Boolean(false);
	}
|	TOK_L_BRACE TOK_R_BRACE
	{
		$$ = new Table();
	}
|	VAR
	{
		$$ = $1;
	}
|	FUNC_CALL
	{
		$$ = $1;
	}
;

FUNC_CALL :
	VAR TOK_L_BRACKET FUNC_ARGS TOK_R_BRACKET
	{
		Variable* ptr = dynamic_cast<Variable*>($1);
		FunctionArgs* args = dynamic_cast<FunctionArgs*>($3);
		$$ = new FunctionCall(ptr,args);
	}
|	VAR TOK_L_BRACKET TOK_R_BRACKET
	{
		Variable* ptr = dynamic_cast<Variable*>($1);
		$$ = new FunctionCall(ptr,nullptr);
	}
;

FUNC_ARGS :
	EXPR
	{
		$$ = new FunctionArgs($1);
	}
|	EXPR TOK_COMMA FUNC_ARGS
	{
		FunctionArgs* args = dynamic_cast<FunctionArgs*>($3);
		$$ = new FunctionArgs($1,args);
	}
;

VAR :
	TOK_NAME
	{
		$$ = Variable::getVariable(string($1));
	}
|	TOK_NAME TOK_DOT TOK_NAME
	{
		Variable* p = Variable::getVariable(string($1));
		$$ = new TableIndex(p,new String($3));
	}
|	TOK_NAME TOK_L_SQUARE EXPR TOK_R_SQUARE
	{
		Variable* p = Variable::getVariable(string($1));
		$$ = new TableIndex(p,$3);
	}
;

%%

void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
	exit(0);
}

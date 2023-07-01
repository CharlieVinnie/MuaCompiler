#ifndef LANG_H_INCLUDED
#define LANG_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

#define DEBUG(fmt,...) fprintf(stderr,fmt,##__VA_ARGS__)

// enum token_class {
//     // Reserved
// 	TOK_AND=1, TOK_BREAK, TOK_DO, TOK_ELSE, TOK_ELSEIF, TOK_END,TOK_FALSE,TOK_FOR,TOK_FUNCTION,TOK_IF,
// 	TOK_IN,TOK_LOCAL,TOK_NIL,TOK_NOT,TOK_OR,TOK_REPEAT,TOK_RETURN,TOK_THEN,TOK_TRUE,TOK_UNTIL,TOK_WHILE,
// 	// Number
// 	TOK_INT,
// 	// String
// 	TOK_STRING,
// 	// Symbol
// 	TOK_ADD,TOK_SUB,TOK_MUL,TOK_DIV,TOK_MOD,TOK_XOR,TOK_CROSS,TOK_EQ,TOK_GEQ,TOK_LEQ,TOK_GT,TOK_LT,TOK_NEQ,
// 	TOK_L_BRACKET,TOK_R_BRACKET,TOK_L_SQUARE,TOK_R_SQUARE,TOK_L_BRACE,TOK_R_BRACE,TOK_SEMICOL,TOK_COLON,
// 	TOK_COMMA,TOK_DOT,TOK_2DOT,TOK_3DOT,TOK_ASSIGN,
// 	// Name
// 	TOK_NAME,
// 	// EOL
// 	TOK_EOL,
// 	// Comment
// 	TOK_COMMENT
// };

class Expression{
public:
	virtual string what() const = 0;
};

class SimpleExpression : public Expression{
public:
	virtual string what() const = 0;
};

class Nil : public SimpleExpression{
public:
	virtual string what() const { return "Nil"; }
};

class Boolean : public SimpleExpression{
public:
	bool v;
	Boolean(bool x) : v(x) {}
	virtual string what() const { return "Boolean"; }
};

class Number : public SimpleExpression{
public:
	double v;
	Number(double x) : v(x) {}
	virtual string what() const { return "Number"; }
};

class String : public SimpleExpression{
public:
	string v;
	String(char* x) : v(x) {}
	virtual string what() const { return "String"; }
};

class FunctionArgs : public SimpleExpression{
public:
	Expression* fir;
	FunctionArgs* oth;
	FunctionArgs(Expression* e,FunctionArgs* o=nullptr) : fir(e), oth(o) { assert(fir); }
	virtual string what() const { return "FunctionArgs"; }
};

class Table : public SimpleExpression{
public:
	Table() {}
	virtual string what() const { return "Table"; }
};

class Variable : public SimpleExpression{
public:
	string name;
	virtual string what() const { return "Variable"; }
	Variable(string _name="$Anon") { name=_name; }
};

class TableIndex : public Variable{
public:
	Variable* t;
	Expression* e;
	virtual string what() const { return "TableIndex"; }
	TableIndex(Variable* _t,Expression* _e) : t(_t), e(_e) { assert(t&&e); }
};

class FunctionCall : public SimpleExpression{
public:
	Variable* f;
	FunctionArgs* args;
	virtual string what() const { return "FunctionCall"; }
	FunctionCall(Variable* _f,FunctionArgs* a) : f(_f), args(a) { assert(f);  DEBUG("Created FunctionCall()\n"); }
};

class BinopExpression : public Expression{
public:
	enum Type {
		ADD, SUB, MUL, DIV, MOD, XOR, CROSS, EQ, GEQ, LEQ, GT, LT, NEQ, DOT, DOT2, ASSIGN, OR, AND
	};
	Expression* lhs;
	Type op;
	Expression* rhs;
	virtual string what() const { return "BinopExpression"; }
	BinopExpression(Expression* l,Type o,Expression* r) : lhs(l), op(o), rhs(r) { assert(lhs&&rhs);  DEBUG("C59reated BinopExpression()\n"); }
};

class UnopExpression : public Expression{
public:
	enum Type {
		POS, NEG, LEN, NOT
	};
	Expression* exp;
	Type op;
	virtual string what() const { return "UnopExpression"; }
	UnopExpression(Type o,Expression* l) : op(o), exp(l) { assert(exp); }
};

class BracketExpression : public Expression{
public:
	Expression* exp;
	virtual string what() const { return "BracketExpression"; }
	BracketExpression(Expression* l) : exp(l) { assert(exp); DEBUG("Created BracketExpression()\n"); }
};

class IterationExpression : public Expression{
public:
	Expression* exp;
	virtual string what() const { return "IterationExpression"; }
	IterationExpression(Expression* l) : exp(l) {}
};

class Command{
public:
	virtual string what() const = 0;
};

class ExpressionCommand : public Command{
public:
	Expression* exp;
	virtual string what() const { return "ExpressionCommand"; }
	ExpressionCommand(Expression* l) : exp(l) {}
};

class ReturnCommand : public Command{
public:
	virtual string what() const { return "ReturnCommand"; }
};

class BreakCommand : public Command{
public:
	virtual string what() const { return "BreakCommand"; }
};

class LocalDeclarationCommand : public Command{
public:
	Variable* var;
	Expression* exp;
	virtual string what() const { return "LocalDeclarationCommand"; }
	LocalDeclarationCommand(Variable* v,Expression* e) : var(v), exp(e) {}
};

class Chunk;

class FunctionDefinitionCommand : public Command{
public:
	Variable* var;
	FunctionArgs* args;
	Chunk* def;
	virtual string what() const { return "FunctionDefinitionCommand"; }
	FunctionDefinitionCommand(Variable* v,FunctionArgs* a,Chunk* c) : var(v), args(a), def(c) {}
};

class Chunk{
public:
	Command* exp;
	Chunk* oth;
	Chunk(Command* e,Chunk* o) : exp(e), oth(o) {}
};

class Block{
public:
	virtual string what() const = 0;
};

// do ... end 
class DoBlock{
public:
	Chunk* ch;
	virtual string what() const { return "DoBlock"; }
	DoBlock(Chunk* _ch) : ch(_ch) {}
};

// if ... then ... elseif ... then ... else ... end
class IfBlock : public Block {
public:
	Expression* cond;
	Chunk* true_ch;
	IfBlock* false_ch;
	virtual string what() const { return "IfBlock"; }
	IfBlock(Expression* c,Chunk* t,IfBlock* f) : cond(c), true_ch(t), false_ch(f) {}
};

// while ... do ... end
class WhileBlock : public Block {
public:
	Expression* cond;
	Chunk* ch;
	virtual string what() const { return "WhileBlock"; }
	WhileBlock(Expression* c,Chunk* _ch) : cond(c), ch(_ch) {}
};

// repeat ... until ... end
class RepeatBlock : public Block {
public:
	Expression* cond;
	Chunk* ch;
	virtual string what() const { return "RepeatBlock"; }
	RepeatBlock(Expression* c,Chunk* _ch) : cond(c), ch(_ch) {}
};

// for ... = ...,...,... do ... end
class NumForBlock : public Block {
public:
	Variable* var;
	Expression* st;
	Expression* ed;
	Expression* step;
	Chunk* ch;
	virtual string what() const { return "NumForBlock"; }
	NumForBlock(Variable* v,Expression* s,Expression* e,Expression* p,Chunk* c) : var(v), st(s), ed(e), step(p), ch(c) {}
};

// for ... in ... do ... end
class GenForBlock : public Block {
public:
	Variable* var;
	Expression* iter;
	Chunk* ch;
	virtual string what() const { return "GenForBlock"; }
	GenForBlock(Variable* v,Expression* i,Chunk* c) : var(v), iter(i), ch(c) {}
};

extern Chunk* whole_program;

// union token_value {
// 	double val;
// 	char* str;
// 	char sym;
// 	void* none;
// };

// void print_token(token_class c);
double MakeDemInt(char* s,int len);
double MakeHexInt(char* s,int len);
double MakeReal(char* s,int len);
char* MakeString(char* s,int len);
// void PrintChunk(Chunk* cmd,char mp[][1000],int& x);
// void PrintExpr(Expression* expr,char mp[][1000],int& x,int y);
// void PrintProgram();

#endif // LANG_H_INCLUDED


// class Variable : public SimpleExpression{
// 	Variable(string _name){
// 		name=_name; type=V_Nil;
// 	}
// public:
// 	enum Type {
// 		V_Nil, V_Bool, V_Number, V_String, V_Function, V_Table, V_TableIndex
// 	};
// 	Type type;
// 	bool b;
// 	double n;
// 	string s;
// 	Function* f;
// 	Table* t;
// 	TableIndex* id;
// 	string name;
// 	virtual string what() const { return "Variable"; }
// 	static map<string,Variable*> var_map;
// 	static Variable* getVariable(string _name){
// 		if(var_map.count(_name)){
// 			return var_map[_name];
// 		}
// 		else{
// 			return var_map[_name] = new Variable(_name);
// 		}
// 	}
// 	static Variable* getAnonVariable(){
// 		return new Variable("&Anon");
// 	}
// 	void set(Variable::Type ty,void* ptr){
// 		type=ty;
// 		if(ty==V_Bool) b=*(bool*)ptr;
// 		else if(ty==V_Number) n=*(double*)ptr;
// 		else if(ty==V_String) s=*(string*)ptr;
// 		else if(ty==V_Function) f=(Function*)ptr;
// 		else if(ty==V_Table) t=(Table*)ptr;
// 		else if(ty==V_TableIndex) id=(TableIndex*)ptr;
// 		else if(ty==V_Nil) ;
// 		else throw 404;
// 	}
// };

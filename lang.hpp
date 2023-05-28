/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LANG_HPP_INCLUDED
# define YY_YY_LANG_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 9 "lang.y"

	#include "mylang.hpp"
#line 21 "lang.y"

	#define YYLTYPE YYLTYPE
	typedef struct YYLTYPE
	{
		int first_line;
		int first_column;
		int last_line;
		int last_column;
		char *filename;
	} YYLTYPE;

#line 64 "lang.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_INT = 258,                 /* TOK_INT  */
    TOK_STRING = 259,              /* TOK_STRING  */
    TOK_NAME = 260,                /* TOK_NAME  */
    TOK_ADD = 261,                 /* TOK_ADD  */
    TOK_SUB = 262,                 /* TOK_SUB  */
    TOK_MUL = 263,                 /* TOK_MUL  */
    TOK_DIV = 264,                 /* TOK_DIV  */
    TOK_MOD = 265,                 /* TOK_MOD  */
    TOK_XOR = 266,                 /* TOK_XOR  */
    TOK_CROSS = 267,               /* TOK_CROSS  */
    TOK_EQ = 268,                  /* TOK_EQ  */
    TOK_GEQ = 269,                 /* TOK_GEQ  */
    TOK_LEQ = 270,                 /* TOK_LEQ  */
    TOK_GT = 271,                  /* TOK_GT  */
    TOK_LT = 272,                  /* TOK_LT  */
    TOK_NEQ = 273,                 /* TOK_NEQ  */
    TOK_L_BRACKET = 274,           /* TOK_L_BRACKET  */
    TOK_R_BRACKET = 275,           /* TOK_R_BRACKET  */
    TOK_L_SQUARE = 276,            /* TOK_L_SQUARE  */
    TOK_R_SQUARE = 277,            /* TOK_R_SQUARE  */
    TOK_L_BRACE = 278,             /* TOK_L_BRACE  */
    TOK_R_BRACE = 279,             /* TOK_R_BRACE  */
    TOK_SEMICOL = 280,             /* TOK_SEMICOL  */
    TOK_COLON = 281,               /* TOK_COLON  */
    TOK_COMMA = 282,               /* TOK_COMMA  */
    TOK_DOT = 283,                 /* TOK_DOT  */
    TOK_2DOT = 284,                /* TOK_2DOT  */
    TOK_3DOT = 285,                /* TOK_3DOT  */
    TOK_ASSIGN = 286,              /* TOK_ASSIGN  */
    TOK_AND = 287,                 /* TOK_AND  */
    TOK_BREAK = 288,               /* TOK_BREAK  */
    TOK_DO = 289,                  /* TOK_DO  */
    TOK_ELSE = 290,                /* TOK_ELSE  */
    TOK_ELSEIF = 291,              /* TOK_ELSEIF  */
    TOK_END = 292,                 /* TOK_END  */
    TOK_FALSE = 293,               /* TOK_FALSE  */
    TOK_FOR = 294,                 /* TOK_FOR  */
    TOK_FUNCTION = 295,            /* TOK_FUNCTION  */
    TOK_IF = 296,                  /* TOK_IF  */
    TOK_IN = 297,                  /* TOK_IN  */
    TOK_LOCAL = 298,               /* TOK_LOCAL  */
    TOK_NIL = 299,                 /* TOK_NIL  */
    TOK_NOT = 300,                 /* TOK_NOT  */
    TOK_OR = 301,                  /* TOK_OR  */
    TOK_REPEAT = 302,              /* TOK_REPEAT  */
    TOK_RETURN = 303,              /* TOK_RETURN  */
    TOK_THEN = 304,                /* TOK_THEN  */
    TOK_TRUE = 305,                /* TOK_TRUE  */
    TOK_UNTIL = 306,               /* TOK_UNTIL  */
    TOK_WHILE = 307,               /* TOK_WHILE  */
    TOK_COMMENT = 308,             /* TOK_COMMENT  */
    TOK_EOL = 309,                 /* TOK_EOL  */
    TOK_POS = 310,                 /* TOK_POS  */
    TOK_NEG = 311,                 /* TOK_NEG  */
    TOK_LEN = 312                  /* TOK_LEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "lang.y"

	double val;
	char* str;
	Expression* p;
	Commands* c;
	void* none;

#line 146 "lang.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LANG_HPP_INCLUDED  */

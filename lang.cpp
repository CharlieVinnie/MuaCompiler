/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 1 "lang.y"

	#include <bits/stdc++.h>
	#include "lexer.hpp"
	using namespace std;
	void yyerror(char* s);
	int yylex();

#line 76 "lang.cpp"




# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "lang.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_INT = 3,                    /* TOK_INT  */
  YYSYMBOL_TOK_STRING = 4,                 /* TOK_STRING  */
  YYSYMBOL_TOK_NAME = 5,                   /* TOK_NAME  */
  YYSYMBOL_TOK_ADD = 6,                    /* TOK_ADD  */
  YYSYMBOL_TOK_SUB = 7,                    /* TOK_SUB  */
  YYSYMBOL_TOK_MUL = 8,                    /* TOK_MUL  */
  YYSYMBOL_TOK_DIV = 9,                    /* TOK_DIV  */
  YYSYMBOL_TOK_MOD = 10,                   /* TOK_MOD  */
  YYSYMBOL_TOK_XOR = 11,                   /* TOK_XOR  */
  YYSYMBOL_TOK_CROSS = 12,                 /* TOK_CROSS  */
  YYSYMBOL_TOK_EQ = 13,                    /* TOK_EQ  */
  YYSYMBOL_TOK_GEQ = 14,                   /* TOK_GEQ  */
  YYSYMBOL_TOK_LEQ = 15,                   /* TOK_LEQ  */
  YYSYMBOL_TOK_GT = 16,                    /* TOK_GT  */
  YYSYMBOL_TOK_LT = 17,                    /* TOK_LT  */
  YYSYMBOL_TOK_NEQ = 18,                   /* TOK_NEQ  */
  YYSYMBOL_TOK_L_BRACKET = 19,             /* TOK_L_BRACKET  */
  YYSYMBOL_TOK_R_BRACKET = 20,             /* TOK_R_BRACKET  */
  YYSYMBOL_TOK_L_SQUARE = 21,              /* TOK_L_SQUARE  */
  YYSYMBOL_TOK_R_SQUARE = 22,              /* TOK_R_SQUARE  */
  YYSYMBOL_TOK_L_BRACE = 23,               /* TOK_L_BRACE  */
  YYSYMBOL_TOK_R_BRACE = 24,               /* TOK_R_BRACE  */
  YYSYMBOL_TOK_SEMICOL = 25,               /* TOK_SEMICOL  */
  YYSYMBOL_TOK_COLON = 26,                 /* TOK_COLON  */
  YYSYMBOL_TOK_COMMA = 27,                 /* TOK_COMMA  */
  YYSYMBOL_TOK_DOT = 28,                   /* TOK_DOT  */
  YYSYMBOL_TOK_2DOT = 29,                  /* TOK_2DOT  */
  YYSYMBOL_TOK_3DOT = 30,                  /* TOK_3DOT  */
  YYSYMBOL_TOK_ASSIGN = 31,                /* TOK_ASSIGN  */
  YYSYMBOL_TOK_AND = 32,                   /* TOK_AND  */
  YYSYMBOL_TOK_BREAK = 33,                 /* TOK_BREAK  */
  YYSYMBOL_TOK_DO = 34,                    /* TOK_DO  */
  YYSYMBOL_TOK_ELSE = 35,                  /* TOK_ELSE  */
  YYSYMBOL_TOK_ELSEIF = 36,                /* TOK_ELSEIF  */
  YYSYMBOL_TOK_END = 37,                   /* TOK_END  */
  YYSYMBOL_TOK_FALSE = 38,                 /* TOK_FALSE  */
  YYSYMBOL_TOK_FOR = 39,                   /* TOK_FOR  */
  YYSYMBOL_TOK_FUNCTION = 40,              /* TOK_FUNCTION  */
  YYSYMBOL_TOK_IF = 41,                    /* TOK_IF  */
  YYSYMBOL_TOK_IN = 42,                    /* TOK_IN  */
  YYSYMBOL_TOK_LOCAL = 43,                 /* TOK_LOCAL  */
  YYSYMBOL_TOK_NIL = 44,                   /* TOK_NIL  */
  YYSYMBOL_TOK_NOT = 45,                   /* TOK_NOT  */
  YYSYMBOL_TOK_OR = 46,                    /* TOK_OR  */
  YYSYMBOL_TOK_REPEAT = 47,                /* TOK_REPEAT  */
  YYSYMBOL_TOK_RETURN = 48,                /* TOK_RETURN  */
  YYSYMBOL_TOK_THEN = 49,                  /* TOK_THEN  */
  YYSYMBOL_TOK_TRUE = 50,                  /* TOK_TRUE  */
  YYSYMBOL_TOK_UNTIL = 51,                 /* TOK_UNTIL  */
  YYSYMBOL_TOK_WHILE = 52,                 /* TOK_WHILE  */
  YYSYMBOL_TOK_COMMENT = 53,               /* TOK_COMMENT  */
  YYSYMBOL_TOK_EOL = 54,                   /* TOK_EOL  */
  YYSYMBOL_TOK_POS = 55,                   /* TOK_POS  */
  YYSYMBOL_TOK_NEG = 56,                   /* TOK_NEG  */
  YYSYMBOL_TOK_LEN = 57,                   /* TOK_LEN  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_PROGRAM = 59,                   /* PROGRAM  */
  YYSYMBOL_CMD = 60,                       /* CMD  */
  YYSYMBOL_EXPR = 61,                      /* EXPR  */
  YYSYMBOL_SIMPLE_EXPR = 62,               /* SIMPLE_EXPR  */
  YYSYMBOL_FUNC_CALL = 63,                 /* FUNC_CALL  */
  YYSYMBOL_FUNC_ARGS = 64,                 /* FUNC_ARGS  */
  YYSYMBOL_VAR = 65                        /* VAR  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  42
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  75

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    75,    79,    86,    91,    95,    99,   103,
     108,   112,   116,   120,   124,   128,   132,   136,   140,   144,
     148,   152,   156,   164,   168,   172,   176,   181,   188,   192,
     196,   200,   204,   208,   212,   216,   223,   229,   237,   241,
     249,   253,   258
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_INT",
  "TOK_STRING", "TOK_NAME", "TOK_ADD", "TOK_SUB", "TOK_MUL", "TOK_DIV",
  "TOK_MOD", "TOK_XOR", "TOK_CROSS", "TOK_EQ", "TOK_GEQ", "TOK_LEQ",
  "TOK_GT", "TOK_LT", "TOK_NEQ", "TOK_L_BRACKET", "TOK_R_BRACKET",
  "TOK_L_SQUARE", "TOK_R_SQUARE", "TOK_L_BRACE", "TOK_R_BRACE",
  "TOK_SEMICOL", "TOK_COLON", "TOK_COMMA", "TOK_DOT", "TOK_2DOT",
  "TOK_3DOT", "TOK_ASSIGN", "TOK_AND", "TOK_BREAK", "TOK_DO", "TOK_ELSE",
  "TOK_ELSEIF", "TOK_END", "TOK_FALSE", "TOK_FOR", "TOK_FUNCTION",
  "TOK_IF", "TOK_IN", "TOK_LOCAL", "TOK_NIL", "TOK_NOT", "TOK_OR",
  "TOK_REPEAT", "TOK_RETURN", "TOK_THEN", "TOK_TRUE", "TOK_UNTIL",
  "TOK_WHILE", "TOK_COMMENT", "TOK_EOL", "TOK_POS", "TOK_NEG", "TOK_LEN",
  "$accept", "PROGRAM", "CMD", "EXPR", "SIMPLE_EXPR", "FUNC_CALL",
  "FUNC_ARGS", "VAR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      82,   -60,   -60,   -17,    82,    82,    82,    82,   -19,   -60,
     -60,    82,   -60,     6,   -60,    38,   -60,   -60,   -11,    82,
       4,    62,    62,   208,   127,   -60,    62,   -60,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    59,   154,   -60,   -60,
      49,    49,    62,    62,    62,    62,   208,   275,   275,   275,
     275,   275,   275,    10,   208,   262,   235,   -60,   -60,   181,
     -10,   -60,    82,   -60,   -60
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    28,    29,    40,     0,     0,     0,     0,     0,    32,
      30,     0,    31,     0,     2,     0,     5,    35,    34,     0,
       0,     6,     7,     8,     0,    33,     9,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,    41,    27,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    26,    25,     4,    37,    38,
       0,    42,     0,    36,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -33,    -4,   -60,   -60,   -59,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    13,    14,    15,    16,    17,    70,    18
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      21,    22,    23,    24,    19,    25,    27,    26,    46,    48,
      73,    20,    67,    74,     0,    47,    28,    29,    30,    31,
      32,    33,    34,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    42,    69,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    30,    31,    32,
      33,    34,     1,     2,     3,     4,     5,    41,    69,    42,
      43,     6,     0,    33,    34,     0,     0,     0,     7,    68,
      42,     0,     8,     0,    44,     1,     2,     3,     4,     5,
       0,     0,    45,    42,     6,     0,     0,     9,     0,     0,
       0,     7,     0,    10,    11,     8,     0,     0,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    42,    43,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    44,     0,     0,    71,     0,     0,     0,
       0,     0,     0,    41,     0,    42,    43,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      44,     0,     0,     0,     0,     0,     0,     0,    72,     0,
      41,     0,    42,    43,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    42,
      43,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    42,    43,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,    41,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    42
};

static const yytype_int8 yycheck[] =
{
       4,     5,     6,     7,    21,    24,     0,    11,    19,     5,
      20,    28,    45,    72,    -1,    19,     6,     7,     8,     9,
      10,    11,    12,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    31,    46,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,     3,     4,     5,     6,     7,    29,    72,    31,
      32,    12,    -1,    11,    12,    -1,    -1,    -1,    19,    20,
      31,    -1,    23,    -1,    46,     3,     4,     5,     6,     7,
      -1,    -1,    54,    31,    12,    -1,    -1,    38,    -1,    -1,
      -1,    19,    -1,    44,    45,    23,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    46,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    29,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    12,    19,    23,    38,
      44,    45,    50,    59,    60,    61,    62,    63,    65,    21,
      28,    61,    61,    61,    61,    24,    61,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    29,    31,    32,    46,    54,    19,    61,     5,    20,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    60,    20,    61,
      64,    22,    27,    20,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     4,     3,     1,     3,
       1,     3,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* PROGRAM: CMD  */
#line 68 "lang.y"
        {
		(yyval.c) = ((yyvsp[0].c));
		whole_program = (yyval.c);
	}
#line 1230 "lang.cpp"
    break;

  case 3: /* CMD: EXPR TOK_EOL  */
#line 76 "lang.y"
        {
		(yyval.c) = new Commands((yyvsp[-1].p),nullptr);
	}
#line 1238 "lang.cpp"
    break;

  case 4: /* CMD: EXPR TOK_EOL CMD  */
#line 80 "lang.y"
        {
		(yyval.c) = new Commands((yyvsp[-2].p),(yyvsp[0].c));
	}
#line 1246 "lang.cpp"
    break;

  case 5: /* EXPR: SIMPLE_EXPR  */
#line 87 "lang.y"
        {
		(yyval.p) = (yyvsp[0].p);
	}
#line 1254 "lang.cpp"
    break;

  case 6: /* EXPR: TOK_ADD EXPR  */
#line 92 "lang.y"
        {
		(yyval.p) = new UnopExpression(UnopExpression::POS,(yyvsp[0].p));
	}
#line 1262 "lang.cpp"
    break;

  case 7: /* EXPR: TOK_SUB EXPR  */
#line 96 "lang.y"
        {
		(yyval.p) = new UnopExpression(UnopExpression::NEG,(yyvsp[0].p));
	}
#line 1270 "lang.cpp"
    break;

  case 8: /* EXPR: TOK_CROSS EXPR  */
#line 100 "lang.y"
        {
		(yyval.p) = new UnopExpression(UnopExpression::LEN,(yyvsp[0].p));
	}
#line 1278 "lang.cpp"
    break;

  case 9: /* EXPR: TOK_NOT EXPR  */
#line 104 "lang.y"
        {
		(yyval.p) = new UnopExpression(UnopExpression::NOT,(yyvsp[0].p));
	}
#line 1286 "lang.cpp"
    break;

  case 10: /* EXPR: EXPR TOK_ADD EXPR  */
#line 109 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::ADD,(yyvsp[0].p));
	}
#line 1294 "lang.cpp"
    break;

  case 11: /* EXPR: EXPR TOK_SUB EXPR  */
#line 113 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::SUB,(yyvsp[0].p));
	}
#line 1302 "lang.cpp"
    break;

  case 12: /* EXPR: EXPR TOK_MUL EXPR  */
#line 117 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::MUL,(yyvsp[0].p));
	}
#line 1310 "lang.cpp"
    break;

  case 13: /* EXPR: EXPR TOK_DIV EXPR  */
#line 121 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::DIV,(yyvsp[0].p));
	}
#line 1318 "lang.cpp"
    break;

  case 14: /* EXPR: EXPR TOK_MOD EXPR  */
#line 125 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::MOD,(yyvsp[0].p));
	}
#line 1326 "lang.cpp"
    break;

  case 15: /* EXPR: EXPR TOK_XOR EXPR  */
#line 129 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::XOR,(yyvsp[0].p));
	}
#line 1334 "lang.cpp"
    break;

  case 16: /* EXPR: EXPR TOK_CROSS EXPR  */
#line 133 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::CROSS,(yyvsp[0].p));
	}
#line 1342 "lang.cpp"
    break;

  case 17: /* EXPR: EXPR TOK_EQ EXPR  */
#line 137 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::EQ,(yyvsp[0].p));
	}
#line 1350 "lang.cpp"
    break;

  case 18: /* EXPR: EXPR TOK_GEQ EXPR  */
#line 141 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::GEQ,(yyvsp[0].p));
	}
#line 1358 "lang.cpp"
    break;

  case 19: /* EXPR: EXPR TOK_LEQ EXPR  */
#line 145 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::LEQ,(yyvsp[0].p));
	}
#line 1366 "lang.cpp"
    break;

  case 20: /* EXPR: EXPR TOK_GT EXPR  */
#line 149 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::GT,(yyvsp[0].p));
	}
#line 1374 "lang.cpp"
    break;

  case 21: /* EXPR: EXPR TOK_LT EXPR  */
#line 153 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::LT,(yyvsp[0].p));
	}
#line 1382 "lang.cpp"
    break;

  case 22: /* EXPR: EXPR TOK_NEQ EXPR  */
#line 157 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::NEQ,(yyvsp[0].p));
	}
#line 1390 "lang.cpp"
    break;

  case 23: /* EXPR: EXPR TOK_2DOT EXPR  */
#line 165 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::DOT2,(yyvsp[0].p));
	}
#line 1398 "lang.cpp"
    break;

  case 24: /* EXPR: EXPR TOK_ASSIGN EXPR  */
#line 169 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::ASSIGN,(yyvsp[0].p));
	}
#line 1406 "lang.cpp"
    break;

  case 25: /* EXPR: EXPR TOK_OR EXPR  */
#line 173 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::OR,(yyvsp[0].p));
	}
#line 1414 "lang.cpp"
    break;

  case 26: /* EXPR: EXPR TOK_AND EXPR  */
#line 177 "lang.y"
        {
		(yyval.p) = new BinopExpression((yyvsp[-2].p),BinopExpression::AND,(yyvsp[0].p));
	}
#line 1422 "lang.cpp"
    break;

  case 27: /* EXPR: TOK_L_BRACKET EXPR TOK_R_BRACKET  */
#line 182 "lang.y"
        {
		(yyval.p) = (yyvsp[-1].p);
	}
#line 1430 "lang.cpp"
    break;

  case 28: /* SIMPLE_EXPR: TOK_INT  */
#line 189 "lang.y"
        {
		(yyval.p) = new Number((yyvsp[0].val));
	}
#line 1438 "lang.cpp"
    break;

  case 29: /* SIMPLE_EXPR: TOK_STRING  */
#line 193 "lang.y"
        {
		(yyval.p) = new String((yyvsp[0].str));
	}
#line 1446 "lang.cpp"
    break;

  case 30: /* SIMPLE_EXPR: TOK_NIL  */
#line 197 "lang.y"
        {
		(yyval.p) = new Nil;
	}
#line 1454 "lang.cpp"
    break;

  case 31: /* SIMPLE_EXPR: TOK_TRUE  */
#line 201 "lang.y"
        {
		(yyval.p) = new Boolean(true);
	}
#line 1462 "lang.cpp"
    break;

  case 32: /* SIMPLE_EXPR: TOK_FALSE  */
#line 205 "lang.y"
        {
		(yyval.p) = new Boolean(false);
	}
#line 1470 "lang.cpp"
    break;

  case 33: /* SIMPLE_EXPR: TOK_L_BRACE TOK_R_BRACE  */
#line 209 "lang.y"
        {
		(yyval.p) = new Table();
	}
#line 1478 "lang.cpp"
    break;

  case 34: /* SIMPLE_EXPR: VAR  */
#line 213 "lang.y"
        {
		(yyval.p) = (yyvsp[0].p);
	}
#line 1486 "lang.cpp"
    break;

  case 35: /* SIMPLE_EXPR: FUNC_CALL  */
#line 217 "lang.y"
        {
		(yyval.p) = (yyvsp[0].p);
	}
#line 1494 "lang.cpp"
    break;

  case 36: /* FUNC_CALL: VAR TOK_L_BRACKET FUNC_ARGS TOK_R_BRACKET  */
#line 224 "lang.y"
        {
		Variable* ptr = dynamic_cast<Variable*>((yyvsp[-3].p));
		FunctionArgs* args = dynamic_cast<FunctionArgs*>((yyvsp[-1].p));
		(yyval.p) = new FunctionCall(ptr,args);
	}
#line 1504 "lang.cpp"
    break;

  case 37: /* FUNC_CALL: VAR TOK_L_BRACKET TOK_R_BRACKET  */
#line 230 "lang.y"
        {
		Variable* ptr = dynamic_cast<Variable*>((yyvsp[-2].p));
		(yyval.p) = new FunctionCall(ptr,nullptr);
	}
#line 1513 "lang.cpp"
    break;

  case 38: /* FUNC_ARGS: EXPR  */
#line 238 "lang.y"
        {
		(yyval.p) = new FunctionArgs((yyvsp[0].p));
	}
#line 1521 "lang.cpp"
    break;

  case 39: /* FUNC_ARGS: EXPR TOK_COMMA FUNC_ARGS  */
#line 242 "lang.y"
        {
		FunctionArgs* args = dynamic_cast<FunctionArgs*>((yyvsp[0].p));
		(yyval.p) = new FunctionArgs((yyvsp[-2].p),args);
	}
#line 1530 "lang.cpp"
    break;

  case 40: /* VAR: TOK_NAME  */
#line 250 "lang.y"
        {
		(yyval.p) = Variable::getVariable(string((yyvsp[0].str)));
	}
#line 1538 "lang.cpp"
    break;

  case 41: /* VAR: TOK_NAME TOK_DOT TOK_NAME  */
#line 254 "lang.y"
        {
		Variable* p = Variable::getVariable(string((yyvsp[-2].str)));
		(yyval.p) = new TableIndex(p,new String((yyvsp[0].str)));
	}
#line 1547 "lang.cpp"
    break;

  case 42: /* VAR: TOK_NAME TOK_L_SQUARE EXPR TOK_R_SQUARE  */
#line 259 "lang.y"
        {
		Variable* p = Variable::getVariable(string((yyvsp[-3].str)));
		(yyval.p) = new TableIndex(p,(yyvsp[-1].p));
	}
#line 1556 "lang.cpp"
    break;


#line 1560 "lang.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 265 "lang.y"


void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
	exit(0);
}

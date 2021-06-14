
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "project.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<malloc.h>
	#include<string.h>
	#define PI 3.14159265
	void yyerror(char *);
	int yylex(void);
	float sym[26];
	int fact(int n){
		int i,sum=1;
		for(i=1;i<=n;i++){
			sum=sum*i;
		}
		return sum;
	}


/* Line 189 of yacc.c  */
#line 93 "project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     IF = 260,
     ELSE = 261,
     FOR = 262,
     MAIN = 263,
     INT = 264,
     CHAR = 265,
     FLOAT = 266,
     STRING = 267,
     RETURN = 268,
     BREAK = 269,
     CONTINUE = 270,
     CASE = 271,
     SWITCH = 272,
     DEFAULT = 273,
     PRINTVAL = 274,
     SIN = 275,
     COS = 276,
     TAN = 277,
     LN = 278,
     FACT = 279,
     TILL = 280,
     LT = 281,
     GTE = 282,
     LTE = 283,
     GT = 284,
     EQ = 285,
     EQEQ = 286,
     NEQ = 287,
     INC = 288,
     DEC = 289,
     WHILE = 290,
     READ = 291,
     WRITE = 292,
     EVENODD = 293,
     LEAPYEAR = 294,
     ISPRIME = 295,
     FIBONACCI = 296,
     SUMMATION = 297,
     SQUARE = 298,
     CUBE = 299,
     POSNEG = 300,
     POWER = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "project.y"
 
  int itype;
  double dtype;   



/* Line 214 of yacc.c  */
#line 182 "project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 194 "project.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      53,    54,    49,    47,    59,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    57,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    16,    19,    22,    27,
      31,    35,    45,    57,    69,    77,    89,    98,   102,   106,
     110,   114,   119,   124,   128,   132,   136,   140,   144,   151,
     157,   162,   165,   167,   169,   171,   173,   177,   179,   181,
     183,   187,   191,   195,   199,   203,   207,   212,   217,   222,
     227,   232,   236,   240,   244,   248,   252,   256,   260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,     8,    53,    54,    55,    62,    56,    -1,
      -1,    62,    63,    -1,    57,    -1,    66,    57,    -1,    69,
      57,    -1,     4,    30,    69,    57,    -1,    36,     4,    57,
      -1,    37,     4,    57,    -1,     7,    53,    69,    25,    69,
      54,    55,    63,    56,    -1,    35,    53,     4,    32,    69,
      54,    55,    33,     4,    57,    56,    -1,    35,    53,     4,
      32,    69,    54,    55,    34,     4,    57,    56,    -1,     5,
      53,    69,    54,    55,    63,    56,    -1,     5,    53,    69,
      54,    55,    63,    56,     6,    55,    63,    56,    -1,    17,
      53,    69,    54,    55,    64,    65,    56,    -1,    19,    69,
      57,    -1,    38,    69,    57,    -1,    39,    69,    57,    -1,
      40,    69,    57,    -1,    41,    25,    69,    57,    -1,    42,
      25,    69,    57,    -1,    33,     4,    57,    -1,    34,     4,
      57,    -1,    43,    69,    57,    -1,    44,    69,    57,    -1,
      45,    69,    57,    -1,    64,    16,    69,    58,    69,    57,
      -1,    16,    69,    58,    69,    57,    -1,    18,    58,    69,
      57,    -1,    67,    68,    -1,     9,    -1,    10,    -1,    11,
      -1,    12,    -1,    68,    59,     4,    -1,     4,    -1,     3,
      -1,     4,    -1,    69,    47,    69,    -1,    69,    48,    69,
      -1,    69,    49,    69,    -1,    69,    51,    69,    -1,    69,
      50,    69,    -1,    69,    52,    69,    -1,    24,    53,    69,
      54,    -1,    20,    53,    69,    54,    -1,    21,    53,    69,
      54,    -1,    23,    53,    69,    54,    -1,    22,    53,    69,
      54,    -1,    69,    30,    69,    -1,    69,    31,    69,    -1,
      69,    32,    69,    -1,    69,    26,    69,    -1,    69,    28,
      69,    -1,    69,    29,    69,    -1,    69,    27,    69,    -1,
      53,    69,    54,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    48,    49,    51,    52,    54,    57,    63,
      69,    73,    81,    91,   101,   110,   118,   122,   123,   128,
     135,   149,   162,   168,   172,   176,   181,   186,   199,   200,
     204,   206,   210,   211,   212,   213,   216,   217,   219,   222,
     224,   226,   228,   230,   232,   244,   246,   248,   250,   252,
     254,   257,   259,   261,   263,   265,   267,   269,   271
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "IF", "ELSE",
  "FOR", "MAIN", "INT", "CHAR", "FLOAT", "STRING", "RETURN", "BREAK",
  "CONTINUE", "CASE", "SWITCH", "DEFAULT", "PRINTVAL", "SIN", "COS", "TAN",
  "LN", "FACT", "TILL", "LT", "GTE", "LTE", "GT", "EQ", "EQEQ", "NEQ",
  "INC", "DEC", "WHILE", "READ", "WRITE", "EVENODD", "LEAPYEAR", "ISPRIME",
  "FIBONACCI", "SUMMATION", "SQUARE", "CUBE", "POSNEG", "POWER", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "'('", "')'", "'{'", "'}'", "';'",
  "':'", "','", "$accept", "program", "statement", "cstatement",
  "multiple_case", "mydefault", "cdeclaration", "TYPE", "ID1",
  "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    43,    45,    42,
      47,    37,    94,    40,    41,   123,   125,    59,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    66,    67,    67,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     2,     2,     4,     3,
       3,     9,    11,    11,     7,    11,     8,     3,     3,     3,
       3,     4,     4,     3,     3,     3,     3,     3,     6,     5,
       4,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    38,    39,
       0,     0,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     5,     4,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    37,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    23,    24,     0,     9,    10,
      18,    19,    20,     0,     0,    25,    26,    27,    58,     0,
      54,    57,    55,    56,    51,    52,    53,    40,    41,    42,
      44,    43,    45,     8,     0,     0,     0,    47,    48,    50,
      49,    46,     0,    21,    22,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    29,     0,
      30,     0,     0,    15,    28,    12,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    39,   143,   150,    40,    41,    70,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -122
static const yytype_int16 yypact[] =
{
       6,   -23,    37,   -16,  -122,   -24,  -122,   131,  -122,    14,
      -5,    -3,  -122,  -122,  -122,  -122,    -2,     0,    -1,    21,
      22,    23,    24,    74,    82,    34,    90,    91,     0,     0,
       0,    71,    72,     0,     0,     0,     0,  -122,  -122,  -122,
      49,    94,   185,     0,     0,     0,     0,  -122,   218,     0,
       0,     0,     0,     0,    50,    52,   106,    55,    56,   229,
     261,   272,     0,     0,   304,   315,   347,   487,  -122,  -122,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -122,   358,   516,   672,   524,  -122,
     553,   561,   590,   598,   627,  -122,  -122,    85,  -122,  -122,
    -122,  -122,  -122,   390,   401,  -122,  -122,  -122,  -122,   110,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,    -9,    -9,    66,
      66,    66,  -122,  -122,    64,     0,    65,  -122,  -122,  -122,
    -122,  -122,     0,  -122,  -122,  -122,   186,   635,   105,   664,
      67,    69,     0,    31,    73,   116,   186,    41,     0,    68,
      76,   -32,    75,    77,     0,    53,     0,  -122,   123,   125,
     186,  -122,   433,     0,   444,    87,    88,    93,  -122,   476,
    -122,   100,   101,  -122,  -122,  -122,  -122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -122,  -122,  -122,  -121,  -122,  -122,  -122,  -122,  -122,   -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,   158,   159,     8,    47,    78,    79,    80,    81,    82,
      83,    59,    60,    61,     1,   140,    64,    65,    66,    67,
      18,    19,    20,    21,    22,   153,    85,    86,    87,    88,
       3,     6,    90,    91,    92,    93,    94,     4,     5,   167,
      80,    81,    82,    83,    43,   103,   104,   148,    44,   149,
      45,    46,    49,    36,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    71,    72,    73,
      74,    75,    76,    77,    50,    51,    52,    53,    54,    71,
      72,    73,    74,    75,    76,    77,    55,    56,    78,    79,
      80,    81,    82,    83,    57,    58,    62,    63,    69,   154,
      78,    79,    80,    81,    82,    83,    68,    95,   137,    96,
      97,   163,    98,    99,   135,   139,   109,   132,    83,   136,
     138,   142,   152,   145,   146,   147,   156,   165,   151,   166,
     160,   155,   157,   161,     8,     9,    10,   162,    11,   164,
      12,    13,    14,    15,   171,   172,   169,     0,    16,   173,
      17,    18,    19,    20,    21,    22,   175,   176,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,    37,    38,     8,
       9,    10,     0,    11,     0,    12,    13,    14,    15,     0,
       0,     0,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    71,    72,    73,    74,    75,    76,    77,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    78,    79,    80,    81,    82,    83,     0,    36,
       0,     0,    84,    38,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,    89,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,   100,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,   101,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,   102,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,   105,    78,    79,    80,    81,    82,    83,     0,     0,
       0,     0,   106,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,   107,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,   123,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,   133,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,   134,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
     168,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,   170,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,   174,    78,    79,    80,    81,    82,    83,
       0,   108,    71,    72,    73,    74,    75,    76,    77,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
     124,    78,    79,    80,    81,    82,    83,     0,   126,    71,
      72,    73,    74,    75,    76,    77,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     0,   127,    78,    79,
      80,    81,    82,    83,     0,   128,    71,    72,    73,    74,
      75,    76,    77,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,     0,   129,    78,    79,    80,    81,    82,
      83,     0,   130,    71,    72,    73,    74,    75,    76,    77,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,   131,    78,    79,    80,    81,    82,    83,     0,   141,
      71,    72,    73,    74,    75,    76,    77,   125,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,     0,   144,    78,
      79,    80,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
      17,    33,    34,     3,     4,    47,    48,    49,    50,    51,
      52,    28,    29,    30,     8,   136,    33,    34,    35,    36,
      20,    21,    22,    23,    24,   146,    43,    44,    45,    46,
      53,    55,    49,    50,    51,    52,    53,     0,    54,   160,
      49,    50,    51,    52,    30,    62,    63,    16,    53,    18,
      53,    53,    53,    53,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    26,    27,    28,
      29,    30,    31,    32,    53,    53,    53,    53,     4,    26,
      27,    28,    29,    30,    31,    32,     4,    53,    47,    48,
      49,    50,    51,    52,     4,     4,    25,    25,     4,    58,
      47,    48,    49,    50,    51,    52,    57,    57,   125,    57,
       4,    58,    57,    57,     4,   132,    59,    32,    52,    55,
      55,    16,     6,    56,    55,   142,    58,     4,    55,     4,
      55,   148,    56,    56,     3,     4,     5,   154,     7,   156,
       9,    10,    11,    12,    57,    57,   163,    -1,    17,    56,
      19,    20,    21,    22,    23,    24,    56,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    57,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    26,    27,    28,    29,    30,    31,    32,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    47,    48,    49,    50,    51,    52,    -1,    53,
      -1,    -1,    57,    57,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    57,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    57,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      57,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    47,    48,    49,    50,    51,    52,
      -1,    54,    26,    27,    28,    29,    30,    31,    32,    -1,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      54,    47,    48,    49,    50,    51,    52,    -1,    54,    26,
      27,    28,    29,    30,    31,    32,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    54,    47,    48,
      49,    50,    51,    52,    -1,    54,    26,    27,    28,    29,
      30,    31,    32,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    54,    47,    48,    49,    50,    51,
      52,    -1,    54,    26,    27,    28,    29,    30,    31,    32,
      -1,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    54,    47,    48,    49,    50,    51,    52,    -1,    54,
      26,    27,    28,    29,    30,    31,    32,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    54,    47,
      48,    49,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    61,    53,     0,    54,    55,    62,     3,     4,
       5,     7,     9,    10,    11,    12,    17,    19,    20,    21,
      22,    23,    24,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    53,    56,    57,    63,
      66,    67,    69,    30,    53,    53,    53,     4,    69,    53,
      53,    53,    53,    53,     4,     4,    53,     4,     4,    69,
      69,    69,    25,    25,    69,    69,    69,    69,    57,     4,
      68,    26,    27,    28,    29,    30,    31,    32,    47,    48,
      49,    50,    51,    52,    57,    69,    69,    69,    69,    57,
      69,    69,    69,    69,    69,    57,    57,     4,    57,    57,
      57,    57,    57,    69,    69,    57,    57,    57,    54,    59,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    57,    54,    25,    54,    54,    54,    54,
      54,    54,    32,    57,    57,     4,    55,    69,    55,    69,
      63,    54,    16,    64,    54,    56,    55,    69,    16,    18,
      65,    55,     6,    63,    58,    69,    58,    56,    33,    34,
      55,    56,    69,    58,    69,     4,     4,    63,    57,    69,
      57,    57,    57,    56,    57,    56,    56
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 46 "project.y"
    {printf("\nSuccessful Compilation\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 51 "project.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 52 "project.y"
    { printf("Declaration\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 54 "project.y"
    {
								(yyval.dtype)=(yyvsp[(1) - (2)].dtype);
							;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 57 "project.y"
    {
						printf("\nValue of the variable %c : %.2f\n",(yyvsp[(1) - (4)].itype)+97,(yyvsp[(3) - (4)].dtype));
							sym[(yyvsp[(1) - (4)].itype)]=(yyvsp[(3) - (4)].dtype);
							(yyval.dtype)=(yyvsp[(3) - (4)].dtype);
					;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 63 "project.y"
    {
								printf("\nplease give input for variable %c :",(yyvsp[(2) - (3)].itype)+97);
                                float a;
                                scanf("%f",&a);
                                sym[(yyvsp[(2) - (3)].itype)] = a;
                            ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 69 "project.y"
    {
								printf("\nValue of %c is %.2f\n",(yyvsp[(2) - (3)].itype)+97,sym[(yyvsp[(2) - (3)].itype)]);
                            ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 73 "project.y"
    {
									int i;
									printf("FOR Loop execution");
									for(i=(yyvsp[(3) - (9)].dtype);i<(yyvsp[(5) - (9)].dtype);i++){
										printf("Value of the loop: %d ",i);
										printf("expression value: %.2f\n", (yyvsp[(8) - (9)].dtype));
									}	
								;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 81 "project.y"
    {
	                                printf("\nwhile Loop execution\n");
									int i=(int)sym[(yyvsp[(3) - (11)].itype)];
									while(sym[(yyvsp[(3) - (11)].itype)]!=(int)(yyvsp[(5) - (11)].dtype)){
										printf("hello for %d time\n",i);
										i++;
										sym[(yyvsp[(3) - (11)].itype)]=sym[(yyvsp[(3) - (11)].itype)]+1;
									}
				        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "project.y"
    {
	                                printf("\nwhile Loop execution\n");
									int i=(int)sym[(yyvsp[(3) - (11)].itype)];
									while(sym[(yyvsp[(3) - (11)].itype)]!=(int)(yyvsp[(5) - (11)].dtype)){
										printf("hello for %d time\n",i);
										i--;
										sym[(yyvsp[(3) - (11)].itype)]=sym[(yyvsp[(3) - (11)].itype)]-1;
									}
				        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 101 "project.y"
    {
								if((yyvsp[(3) - (7)].dtype)){
									printf("\nvalue of expression in IF: %.2f\n",(yyvsp[(6) - (7)].dtype));
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 110 "project.y"
    {
								if((yyvsp[(3) - (11)].dtype)){
									printf("value of expression in IF: %.2f\n",(yyvsp[(6) - (11)].dtype));
								}
								else{
									printf("value of expression in ELSE: %.2f\n",(yyvsp[(10) - (11)].dtype));
								}
							;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 119 "project.y"
    {
							    printf("\n Switch case statement ended \n");
						    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 122 "project.y"
    {printf("\nPrinted value of Expression %.2f\n",(yyvsp[(2) - (3)].dtype));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 123 "project.y"
    {
												int a=(int)(yyvsp[(2) - (3)].dtype);
												if(a%2)printf("\n%d is odd\n",a);
												else printf("\n%d is even\n",a);
											;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 128 "project.y"
    {
	                            int n = (int)(yyvsp[(2) - (3)].dtype);
                                if(((n%4 == 0) && (n%100 != 0)) || (n%400 == 0))
                                    printf("\n%d is leap year\n",n);
                                else
                                    printf("\n%d is not leap year\n",n);
                            ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 135 "project.y"
    {
								
								int n,i,m=0,flag=0;        
								n=(int)(yyvsp[(2) - (3)].dtype);    
								m=n/2;    
								for(i=2;i<=m;i++){    
									if(n%i==0){   
										printf("\n%d is not a prime number\n",n);    
										flag=1;    
										break;    
									}    
								}    
								if(flag==0)printf("\n%d is a prime number\n",n); 
							;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 149 "project.y"
    {    
									int n1=0,n2=1,n3,i,number;
									number = (int)(yyvsp[(3) - (4)].dtype);
									printf("\nFirst %d fibonacci numbers are: ",number);    
									printf("%d %d",n1,n2);
									for(i=2;i<number;++i)    {    
										n3=n1+n2;    
										printf(" %d",n3);    
										n1=n2;    
										n2=n3;    
									}  
									printf("\n");
 								;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 162 "project.y"
    {
									int n;
									n=(int)(yyvsp[(3) - (4)].dtype);
									int sum=n*(n+1)/2;
									printf("\n The summation of 1 to %d is %d\n",n,sum);
								;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 168 "project.y"
    {	
										sym[(yyvsp[(2) - (3)].itype)]=sym[(yyvsp[(2) - (3)].itype)]+1;
										printf("\nvalue incremented \n");
								;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 172 "project.y"
    {
										sym[(yyvsp[(2) - (3)].itype)]=sym[(yyvsp[(2) - (3)].itype)]-1;
										printf("\nvalue decremented \n");
								;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 176 "project.y"
    {	
									(yyval.dtype)=(yyvsp[(2) - (3)].dtype)*(yyvsp[(2) - (3)].dtype);
									int a=(int)(yyvsp[(2) - (3)].dtype);
									printf("\nsquare of %d is %d\n",a,a*a);
								;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 181 "project.y"
    {
									(yyval.dtype)=(yyvsp[(2) - (3)].dtype)*(yyvsp[(2) - (3)].dtype)*(yyvsp[(2) - (3)].dtype);
									int a=(int)(yyvsp[(2) - (3)].dtype);
									printf("\ncube of %d is %d\n",a,a*a*a);
								;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 186 "project.y"
    {
									double num=(yyvsp[(2) - (3)].dtype);
									if (num <= 0.0) {
										if (num == 0.0)
											printf("\nYou entered 0\n");
										else
											printf("\nYou entered a negative number.\n");
									} 
									else
										printf("\nYou entered a positive number.\n");
								;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 199 "project.y"
    { int caseno;caseno=(int)(yyvsp[(3) - (6)].dtype);printf("\n value of case %d is %.2f \n",caseno,(yyvsp[(5) - (6)].dtype)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 200 "project.y"
    { int caseno;caseno=(int)(yyvsp[(2) - (5)].dtype);printf("\n value of case %d is %.2f \n",caseno,(yyvsp[(4) - (5)].dtype)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 204 "project.y"
    { printf("\n value of default is %.2f \n",(yyvsp[(3) - (4)].dtype));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 206 "project.y"
    {printf("\nvariable Declaration \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 210 "project.y"
    {printf("interger declaration\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 211 "project.y"
    {printf("char declaration\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 212 "project.y"
    {printf("float declaration\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 213 "project.y"
    {printf("string declaration\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 219 "project.y"
    { (yyval.dtype)=(yyvsp[(1) - (1)].dtype); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 222 "project.y"
    { (yyval.dtype) = sym[(yyvsp[(1) - (1)].itype)]; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 224 "project.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) + (yyvsp[(3) - (3)].dtype);printf("\nvalue of addition: %.2f\n", (yyval.dtype)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 226 "project.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) - (yyvsp[(3) - (3)].dtype);printf("\nvalue of subtraction: %.2f\n", (yyval.dtype)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 228 "project.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) * (yyvsp[(3) - (3)].dtype);printf("\nvalue of multiplication: %.2f\n", (yyval.dtype)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 230 "project.y"
    { int a=(int)(yyvsp[(1) - (3)].dtype);int b=(int)(yyvsp[(3) - (3)].dtype);int c=a%b;(yyval.dtype) = (double) c;printf("\nvalue of modulus: %d\n", a%b); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 232 "project.y"
    { 	if((yyvsp[(3) - (3)].dtype)) 
				  		{
				     		(yyval.dtype) = (yyvsp[(1) - (3)].dtype) / (yyvsp[(3) - (3)].dtype);
							 printf("\nvalue of division: %.2f\n", (yyval.dtype));
				  		}
				  		else
				  		{
							(yyval.dtype) = 0;
							printf("\ndivision by zero failed to divide\t");
				  		} 	
				    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 244 "project.y"
    {int val1=(int)(yyvsp[(1) - (3)].dtype);int val2=(int)(yyvsp[(3) - (3)].dtype); printf("\nvalue of %d power %d: %.2f\n",val1,val2,pow(val1,val2)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 246 "project.y"
    {int val=(int)(yyvsp[(3) - (4)].dtype);printf("\nValue of Factorial(%d) is : %d\n",val,fact(val)); (yyval.dtype) = fact((yyvsp[(3) - (4)].dtype)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 248 "project.y"
    {int degree=(int)(yyvsp[(3) - (4)].dtype);printf("\nValue of Sin(%.d) is : %.2f\n",degree,sin((yyvsp[(3) - (4)].dtype)*PI/180)); (yyval.dtype)=sin((yyvsp[(3) - (4)].dtype)*PI/180);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 250 "project.y"
    {int degree=(int)(yyvsp[(3) - (4)].dtype);printf("\nValue of Cos(%d) is : %.2f\n",degree,cos((yyvsp[(3) - (4)].dtype)*PI/180)); (yyval.dtype)=cos((yyvsp[(3) - (4)].dtype)*PI/180); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 252 "project.y"
    {int degree=(int)(yyvsp[(3) - (4)].dtype);printf("\nValue of Log(%d) is :  %.2f\n",degree,(log((yyvsp[(3) - (4)].dtype)))); (yyval.dtype)=(log((yyvsp[(3) - (4)].dtype))); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 254 "project.y"
    {int degree=(int)(yyvsp[(3) - (4)].dtype);printf("\nValue of Tan(%d) is : %.2f\n",degree,tan((yyvsp[(3) - (4)].dtype)*PI/180)); (yyval.dtype)=tan((yyvsp[(3) - (4)].dtype)*PI/180); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 257 "project.y"
    { (yyvsp[(1) - (3)].dtype) =(yyvsp[(3) - (3)].dtype); printf("Value of variable: %.2f",(yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 259 "project.y"
    { (yyval.dtype) = ((yyvsp[(1) - (3)].dtype) == (yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 261 "project.y"
    { (yyval.dtype) = ((yyvsp[(1) - (3)].dtype) != (yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 263 "project.y"
    { (yyval.dtype) = ((yyvsp[(1) - (3)].dtype) < (yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 265 "project.y"
    { (yyval.dtype) = ((yyvsp[(1) - (3)].dtype) <= (yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 267 "project.y"
    { (yyval.dtype) = ((yyvsp[(1) - (3)].dtype) > (yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 269 "project.y"
    { (yyval.dtype) = ((yyvsp[(1) - (3)].dtype) >= (yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 271 "project.y"
    { (yyval.dtype) = (yyvsp[(2) - (3)].dtype);	;}
    break;



/* Line 1455 of yacc.c  */
#line 2127 "project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 273 "project.y"


void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}

/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myparser.y" /* yacc.c:338  */

#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"
using namespace std;
extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;
int yylex(void);
void yyerror(const char*);
int NUM = 0;

#line 86 "y.tab.c" /* yacc.c:338  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    CONSTANT_INT = 262,
    CONSTANT_DOUBLE = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    CHAR = 286,
    INT = 287,
    DOUBLE = 288,
    VOID = 289,
    BOOL = 290,
    CASE = 291,
    IF = 292,
    ELSE = 293,
    SWITCH = 294,
    WHILE = 295,
    DO = 296,
    FOR = 297,
    GOTO = 298,
    CONTINUE = 299,
    BREAK = 300,
    RETURN = 301,
    TRUE = 302,
    FALSE = 303,
    LOWER_THAN_ELSE = 304
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define CONSTANT_INT 262
#define CONSTANT_DOUBLE 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define CHAR 286
#define INT 287
#define DOUBLE 288
#define VOID 289
#define BOOL 290
#define CASE 291
#define IF 292
#define ELSE 293
#define SWITCH 294
#define WHILE 295
#define DO 296
#define FOR 297
#define GOTO 298
#define CONTINUE 299
#define BREAK 300
#define RETURN 301
#define TRUE 302
#define FALSE 303
#define LOWER_THAN_ELSE 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "myparser.y" /* yacc.c:353  */

	struct gramTree* gt;

#line 231 "y.tab.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   728

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    63,    56,     2,
      71,    72,    61,    60,    50,    59,    55,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      64,    52,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    67,    70,    58,     2,     2,     2,
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
      45,    46,    47,    48,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    65,    70,    77,    84,    93,   100,   108,
     112,   117,   122,   127,   132,   140,   144,   154,   159,   165,
     171,   179,   183,   187,   191,   199,   203,   209,   215,   225,
     229,   235,   245,   249,   256,   267,   271,   277,   283,   290,
     301,   305,   312,   322,   326,   336,   340,   350,   354,   364,
     368,   379,   383,   394,   399,   409,   413,   418,   423,   428,
     433,   438,   443,   448,   453,   458,   467,   472,   483,   487,
     491,   499,   503,   512,   516,   527,   532,   537,   542,   547,
     557,   563,   568,   576,   582,   589,   596,   603,   615,   619,
     628,   632,   636,   643,   647,   656,   660,   664,   668,   672,
     678,   682,   686,   690,   694,   698,   706,   710,   715,   723,
     727,   731,   737,   746,   754,   758,   765,   769,   777,   781,
     785,   789,   793,   797,   805,   809,   818,   824,   833,   837,
     844,   848,   855,   859,   867,   873,   879,   889,   895,   901,
     907,   913,   919,   929,   935,   940,   945,   950,   959,   963,
     970,   977,   987,   992,  1000,  1004
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID",
  "BOOL", "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "TRUE", "FALSE", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'", "'('",
  "')'", "LOWER_THAN_ELSE", "$accept", "Program", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    58,    61,    91,    93,    46,    38,    33,   126,    45,
      43,    42,    47,    37,    60,    62,    94,   124,    63,   123,
     125,    40,    41,   304
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     207,  -144,  -144,  -144,  -144,  -144,  -144,    14,    39,  -144,
     -16,  -144,    15,   111,   207,  -144,  -144,   127,  -144,  -144,
      14,  -144,    99,   144,   571,   482,    45,  -144,  -144,  -144,
    -144,   240,   101,  -144,    15,  -144,   232,  -144,  -144,  -144,
     642,   642,  -144,  -144,  -144,  -144,  -144,  -144,   466,   642,
    -144,    87,   651,   642,   191,   106,   224,     1,   279,   -46,
       5,     7,   100,    94,  -144,  -144,  -144,    66,    75,  -144,
    -144,     4,   -42,  -144,   -37,   123,   642,   110,   114,   116,
     370,   124,   154,   151,   162,   311,  -144,  -144,   657,  -144,
     257,  -144,  -144,  -144,  -144,   305,  -144,  -144,  -144,  -144,
    -144,   194,  -144,  -144,  -144,  -144,   642,   246,  -144,    55,
     571,   280,  -144,   -14,  -144,  -144,   642,    35,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   642,
    -144,   642,   642,   642,   642,   642,   642,   642,   642,   642,
     642,   642,   642,   642,   642,   642,   642,   642,   642,  -144,
    -144,   541,    19,   -30,   136,   294,  -144,   265,  -144,   370,
    -144,    10,   642,   642,   642,   123,   262,   389,   255,  -144,
    -144,  -144,   306,  -144,  -144,   642,  -144,  -144,     2,  -144,
     447,  -144,  -144,  -144,  -144,  -144,   -26,  -144,    -3,  -144,
    -144,  -144,  -144,  -144,   191,   191,   106,   106,   224,   224,
     224,   224,     1,     1,   279,   -46,     5,     7,   100,  -144,
     263,   266,  -144,    69,   252,   556,   259,  -144,  -144,  -144,
     370,    71,    72,    78,   272,   636,   636,  -144,  -144,  -144,
    -144,  -144,  -144,   571,  -144,   642,  -144,  -144,  -144,  -144,
    -144,  -144,   276,   303,  -144,    81,  -144,   370,   370,   370,
     642,    52,   198,  -144,  -144,  -144,  -144,  -144,   296,  -144,
    -144,    88,   370,    95,   370,    96,   370,   312,  -144,   370,
    -144,   370,  -144,  -144,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    80,    76,    77,    78,    75,    79,     0,     0,   151,
       0,    71,     0,    73,     2,   148,   150,     0,     1,    70,
       0,    68,     0,    73,     0,     0,     0,   149,    81,    72,
      69,     0,     0,   154,     0,   153,     0,     3,     6,     7,
       0,     0,     4,     5,    24,    23,    22,    21,     0,     0,
       9,    17,    25,     0,    29,    32,    35,    40,    43,    45,
      47,    49,    51,    53,   106,    74,    84,     0,     0,    93,
      87,    92,     0,    88,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,   126,     0,    66,
       0,   130,   131,   118,   119,     0,   128,   120,   121,   122,
     123,    80,   155,   152,    18,    19,     0,     0,   109,     0,
       0,     0,   114,     0,    13,    14,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    55,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      82,     0,     0,    90,    91,     0,    85,     0,    86,     0,
      25,     0,     0,     0,     0,     3,     0,     0,     0,   144,
     145,   146,     0,     3,   133,     0,   127,   129,     0,   117,
       0,   107,   110,   113,   115,     8,     0,    11,     0,    15,
      54,    26,    27,    28,    31,    30,    33,    34,    38,    39,
      36,    37,    41,    42,    44,    46,    48,    50,    52,    96,
       0,     0,   102,     0,     0,     0,     0,    89,    94,   124,
       0,     0,     0,     0,     0,     0,     0,   143,   147,    67,
     116,   108,   111,     0,    10,     0,    12,   100,    97,   103,
      95,    98,     0,     0,   104,     0,   125,     0,     0,     0,
       0,     0,     0,   112,    16,   101,    99,   105,   134,   136,
     137,     0,     0,     0,     0,     0,     0,     0,   141,     0,
     139,     0,   135,   138,   142,   140
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -144,    86,  -144,   249,   230,   121,
     243,   228,   234,   241,   242,   245,   -57,   -21,  -144,   -48,
     -11,   149,   368,     0,    -1,  -143,   235,  -144,   239,   -43,
    -144,   214,  -144,   284,   -78,  -144,    65,  -144,   307,  -123,
    -144,  -144,  -144,  -144,   384,  -144,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    50,    51,   188,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    89,   129,    90,
       9,    10,    11,    34,    13,    72,    73,    74,   154,    65,
     109,   110,   111,   112,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    14,    15,    16,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,   113,   166,    64,    68,   108,    17,     1,   155,   213,
     144,    23,    33,   157,    12,   138,   139,     1,     1,   161,
      91,   148,     1,    25,   175,   102,    71,    64,   234,   148,
     156,    17,    71,    19,    20,   158,   175,   172,    37,    18,
     113,    26,    38,    39,   226,    40,    41,   235,    69,   178,
       2,     3,     4,     5,     6,    37,   230,   151,   185,    38,
      39,   220,    40,    41,    21,   140,   141,   182,   186,   236,
     153,   145,   151,   245,   146,   152,     2,     3,     4,     5,
       6,   219,    42,    43,    91,     7,     7,    17,    35,    64,
     152,   212,    44,    45,    46,    47,   189,   114,   115,    42,
      43,   103,   251,   252,   101,   180,    49,   187,   190,    44,
      45,    46,    47,   148,   221,   222,   223,    70,   147,   155,
     149,   175,   175,    49,   262,   181,   104,   105,   175,   150,
     211,   155,     2,     3,     4,     5,     6,   232,   175,   130,
     116,   239,   246,   247,   248,   175,   175,     1,    30,    20,
     249,    17,    71,   257,   229,    71,   225,   168,   117,    64,
     267,    22,   160,    24,    25,   134,   135,   269,   271,   258,
     259,   260,     7,    70,   159,     2,     3,     4,     5,     6,
      25,   162,    26,    22,   268,   163,   270,   164,   272,   215,
     253,   274,   160,   275,   243,   167,    24,    25,    26,    28,
     169,    37,   261,   263,   265,    38,    39,   216,    40,    41,
       1,   170,    64,    31,   254,    32,    71,   191,   192,   193,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,     1,   136,   137,     2,     3,
       4,     5,     6,    75,   -93,    42,    43,    38,    39,   179,
      40,    41,   131,   132,   133,    44,    45,    46,    47,   198,
     199,   200,   201,     2,     3,     4,     5,     6,   218,    49,
     264,     2,     3,     4,     5,     6,    76,    77,     7,    78,
      79,    80,    81,    82,    83,    84,    85,    42,    43,    86,
       2,     3,     4,     5,     6,   142,   143,    44,    45,    46,
      47,    31,   224,     7,   227,   215,   174,   175,    75,    31,
      87,    88,    38,    39,    37,    40,    41,   237,    38,    39,
     238,    40,    41,   216,   240,     2,     3,     4,     5,     6,
     255,   244,   183,   106,   266,   107,     2,     3,     4,     5,
       6,    76,    77,   250,    78,    79,    80,    81,    82,    83,
      84,    85,    42,    43,    86,   228,   175,   256,    42,    43,
     171,   273,    44,    45,    46,    47,   196,   197,    44,    45,
      46,    47,   204,   165,    31,   176,    88,    38,    39,   205,
      40,    41,    49,   194,   195,   202,   203,   206,    29,   207,
     217,   214,   173,   208,   233,   184,    38,    39,    27,    40,
      41,     0,   177,     0,     0,     0,    76,    77,     0,    78,
      79,    80,    81,    82,    83,    84,    85,    42,    43,    86,
       2,     3,     4,     5,     6,     0,     0,    44,    45,    46,
      47,     0,     0,     0,     0,     0,    42,    43,    86,    31,
       0,    49,     0,     0,     0,     0,    44,    45,    46,    47,
      37,     0,     0,     0,    38,    39,     0,    40,    41,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
     106,     0,   107,     0,    44,    45,    46,    47,     0,     0,
       0,     0,     0,    42,    43,     0,    48,   231,    49,   106,
       0,   107,     0,    44,    45,    46,    47,     0,     0,    42,
      43,     0,     0,     0,     0,    48,    66,    49,     0,    44,
      45,    46,    47,    67,    37,     0,     0,     0,    38,    39,
       0,    40,    41,    49,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    38,    39,     0,    40,    41,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    38,    39,
       0,    40,    41,     0,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,   209,     0,     0,    44,    45,
      46,    47,   210,    42,    43,     0,     0,     0,     0,     0,
     241,     0,    49,    44,    45,    46,    47,   242,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    49,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,    37,
      48,     0,    49,    38,    39,    37,    40,    41,     0,    38,
      39,     0,    40,    41,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,    38,    39,     0,    40,    41,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,     0,    42,    43,    86,     0,     0,     0,    42,
      43,     0,     0,    44,    45,    46,    47,     0,     0,    44,
      45,    46,    47,   128,    42,    43,     0,    49,     0,     0,
       0,     0,     0,    49,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88
};

static const yytype_int16 yycheck[] =
{
       0,    49,    80,    24,    25,    48,     7,     3,    50,   152,
      56,    12,    23,    50,    14,    14,    15,     3,     3,    76,
      31,    19,     3,    53,    50,    36,    26,    48,    54,    19,
      72,    32,    32,    49,    50,    72,    50,    85,     3,     0,
      88,    71,     7,     8,   167,    10,    11,    50,     3,   106,
      31,    32,    33,    34,    35,     3,    54,    53,    72,     7,
       8,    51,    10,    11,    49,    64,    65,   110,   116,    72,
      71,    66,    53,   216,    67,    71,    31,    32,    33,    34,
      35,   159,    47,    48,    95,    71,    71,    88,    23,   110,
      71,    72,    57,    58,    59,    60,   117,    10,    11,    47,
      48,    36,   225,   226,     3,    50,    71,    72,   129,    57,
      58,    59,    60,    19,   162,   163,   164,    72,    18,    50,
      54,    50,    50,    71,    72,    70,    40,    41,    50,    54,
     151,    50,    31,    32,    33,    34,    35,   180,    50,    53,
      53,    72,   220,    72,    72,    50,    50,     3,    49,    50,
      72,   152,   152,    72,   175,   155,   167,     3,    71,   180,
      72,    12,    76,    52,    53,    59,    60,    72,    72,   247,
     248,   249,    71,    72,    51,    31,    32,    33,    34,    35,
      53,    71,    71,    34,   262,    71,   264,    71,   266,    53,
     233,   269,   106,   271,   215,    71,    52,    53,    71,    72,
      49,     3,   250,   251,   252,     7,     8,    71,    10,    11,
       3,    49,   233,    69,   235,    71,   216,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     3,    12,    13,    31,    32,
      33,    34,    35,     3,    50,    47,    48,     7,     8,     3,
      10,    11,    61,    62,    63,    57,    58,    59,    60,   138,
     139,   140,   141,    31,    32,    33,    34,    35,     3,    71,
      72,    31,    32,    33,    34,    35,    36,    37,    71,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      31,    32,    33,    34,    35,    16,    17,    57,    58,    59,
      60,    69,    40,    71,    49,    53,    49,    50,     3,    69,
      70,    71,     7,     8,     3,    10,    11,    54,     7,     8,
      54,    10,    11,    71,    72,    31,    32,    33,    34,    35,
      54,    72,    52,    53,    38,    55,    31,    32,    33,    34,
      35,    36,    37,    71,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    49,    50,    54,    47,    48,
      49,    49,    57,    58,    59,    60,   136,   137,    57,    58,
      59,    60,   144,     3,    69,    70,    71,     7,     8,   145,
      10,    11,    71,   134,   135,   142,   143,   146,    20,   147,
     155,   152,     3,   148,   180,   111,     7,     8,    14,    10,
      11,    -1,    95,    -1,    -1,    -1,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      31,    32,    33,    34,    35,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    69,
      -1,    71,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
       3,    -1,    -1,    -1,     7,     8,    -1,    10,    11,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,
       8,    -1,    10,    11,    47,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    69,    70,    71,    53,
      -1,    55,    -1,    57,    58,    59,    60,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    69,    54,    71,    -1,    57,
      58,    59,    60,    61,     3,    -1,    -1,    -1,     7,     8,
      -1,    10,    11,    71,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    47,    48,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    71,    57,    58,    59,    60,    61,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      69,    -1,    71,     7,     8,     3,    10,    11,    -1,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,     7,     8,    -1,    10,    11,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    47,
      48,    -1,    -1,    57,    58,    59,    60,    -1,    -1,    57,
      58,    59,    60,    52,    47,    48,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    71,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    71,    75,    94,
      95,    96,    97,    98,   117,   118,   119,    98,     0,    49,
      50,    49,    95,    98,    52,    53,    71,   118,    72,    96,
      49,    69,    71,    94,    97,   110,   120,     3,     7,     8,
      10,    11,    47,    48,    57,    58,    59,    60,    69,    71,
      76,    77,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,   103,    54,    61,    91,     3,
      72,    97,    99,   100,   101,     3,    36,    37,    39,    40,
      41,    42,    43,    44,    45,    46,    49,    70,    71,    91,
      93,    94,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     3,    94,   110,    79,    79,    53,    55,   103,   104,
     105,   106,   107,    93,    10,    11,    53,    71,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    52,    92,
      79,    61,    62,    63,    59,    60,    12,    13,    14,    15,
      64,    65,    16,    17,    56,    66,    67,    18,    19,    54,
      54,    53,    71,    98,   102,    50,    72,    50,    72,    51,
      79,    90,    71,    71,    71,     3,   108,    71,     3,    49,
      49,    49,    93,     3,    49,    50,    70,   112,    90,     3,
      50,    70,   103,    52,   107,    72,    93,    72,    78,    91,
      91,    79,    79,    79,    81,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    86,    87,    88,    89,    54,
      61,    91,    72,    99,   102,    53,    71,   100,     3,   108,
      51,    93,    93,    93,    40,    94,   113,    49,    49,    91,
      54,    70,   103,   105,    54,    50,    72,    54,    54,    72,
      72,    54,    61,    91,    72,    99,   108,    72,    72,    72,
      71,   113,   113,   103,    91,    54,    54,    72,   108,   108,
     108,    93,    72,    93,    72,    93,    38,    72,   108,    72,
     108,    72,   108,    49,   108,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     3,     4,     4,     3,     1,     3,
       2,     2,     1,     1,     3,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     2,     3,     1,     2,
       1,     1,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
                  (unsigned long) yystacksize));

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 58 "myparser.y" /* yacc.c:1645  */
    {
		root = create_tree("Program",1,(yyvsp[0].gt));
	}
#line 1618 "y.tab.c" /* yacc.c:1645  */
    break;

  case 3:
#line 65 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[0].gt)->content.c_str(),1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tID Declaration,\t\tsymbol:%s\tChildren:\n", (yyval.gt)->no, (yyvsp[0].gt)->content.c_str());
	}
#line 1628 "y.tab.c" /* yacc.c:1645  */
    break;

  case 4:
#line 70 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[0].gt)->content.c_str(),1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
		(yyval.gt)->no = NUM ++;
		printf("%d:\tValue Judgement,\t\tTRUE\tChildren:\n", (yyval.gt)->no);
	}
#line 1640 "y.tab.c" /* yacc.c:1645  */
    break;

  case 5:
#line 77 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[0].gt)->content.c_str(),1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
		(yyval.gt)->no = NUM ++;
		printf("%d:\tValue Judgement,\t\tFALSE\tChildren:\n", (yyval.gt)->no);
	}
#line 1652 "y.tab.c" /* yacc.c:1645  */
    break;

  case 6:
#line 84 "myparser.y" /* yacc.c:1645  */
    {
		//printf("%d",$1->int_value);
		(yyval.gt) = create_tree((yyvsp[0].gt)->content.c_str(),1,(yyvsp[0].gt));
		// $$->type = "int";
		// $$->int_value = $1->int_value;
		(yyval.gt)->no = NUM ++;
		printf("%d:\tConstant INT Declaration,\tvalue:%s\tChildren:\n", (yyval.gt)->no, (yyvsp[0].gt)->content.c_str());
		
	}
#line 1666 "y.tab.c" /* yacc.c:1645  */
    break;

  case 7:
#line 93 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[0].gt)->content.c_str(),1,(yyvsp[0].gt));
		// $$->type = "double";
		// $$->double_value = $1->double_value;
		(yyval.gt)->no = NUM ++;
		printf("%d:\tConstant DOUBLE Declaration,\tvalue:%s\tChildren:\n", (yyval.gt)->no, (yyvsp[0].gt)->content.c_str());
	}
#line 1678 "y.tab.c" /* yacc.c:1645  */
    break;

  case 8:
#line 100 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 1687 "y.tab.c" /* yacc.c:1645  */
    break;

  case 9:
#line 108 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[0].gt)->content.c_str(),1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1696 "y.tab.c" /* yacc.c:1645  */
    break;

  case 10:
#line 112 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//数组调用
		(yyval.gt)->no = (yyvsp[-3].gt)->no;
	}
#line 1706 "y.tab.c" /* yacc.c:1645  */
    break;

  case 11:
#line 117 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 1716 "y.tab.c" /* yacc.c:1645  */
    break;

  case 12:
#line 122 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
		(yyval.gt)->no = (yyvsp[-3].gt)->no;
	}
#line 1726 "y.tab.c" /* yacc.c:1645  */
    break;

  case 13:
#line 127 "myparser.y" /* yacc.c:1645  */
    {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 1736 "y.tab.c" /* yacc.c:1645  */
    break;

  case 14:
#line 132 "myparser.y" /* yacc.c:1645  */
    {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 1746 "y.tab.c" /* yacc.c:1645  */
    break;

  case 15:
#line 140 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("argument_expression_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1755 "y.tab.c" /* yacc.c:1645  */
    break;

  case 16:
#line 144 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1766 "y.tab.c" /* yacc.c:1645  */
    break;

  case 17:
#line 154 "myparser.y" /* yacc.c:1645  */
    {
		//printf("postfix");
		(yyval.gt) = create_tree("unary_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1776 "y.tab.c" /* yacc.c:1645  */
    break;

  case 18:
#line 159 "myparser.y" /* yacc.c:1645  */
    {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:++\t\tChildren:", (yyval.gt)->no);
	}
#line 1787 "y.tab.c" /* yacc.c:1645  */
    break;

  case 19:
#line 165 "myparser.y" /* yacc.c:1645  */
    {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:--\t\tChildren:", (yyval.gt)->no);
	}
#line 1798 "y.tab.c" /* yacc.c:1645  */
    break;

  case 20:
#line 171 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 1807 "y.tab.c" /* yacc.c:1645  */
    break;

  case 21:
#line 179 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1816 "y.tab.c" /* yacc.c:1645  */
    break;

  case 22:
#line 183 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1825 "y.tab.c" /* yacc.c:1645  */
    break;

  case 23:
#line 187 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1834 "y.tab.c" /* yacc.c:1645  */
    break;

  case 24:
#line 191 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1843 "y.tab.c" /* yacc.c:1645  */
    break;

  case 25:
#line 199 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("multiplicative_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1852 "y.tab.c" /* yacc.c:1645  */
    break;

  case 26:
#line 203 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:*\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1863 "y.tab.c" /* yacc.c:1645  */
    break;

  case 27:
#line 209 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:/\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1874 "y.tab.c" /* yacc.c:1645  */
    break;

  case 28:
#line 215 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:%\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1885 "y.tab.c" /* yacc.c:1645  */
    break;

  case 29:
#line 225 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("additive_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1894 "y.tab.c" /* yacc.c:1645  */
    break;

  case 30:
#line 229 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:+\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1905 "y.tab.c" /* yacc.c:1645  */
    break;

  case 31:
#line 235 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:-\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1916 "y.tab.c" /* yacc.c:1645  */
    break;

  case 32:
#line 245 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("shift_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1925 "y.tab.c" /* yacc.c:1645  */
    break;

  case 33:
#line 249 "myparser.y" /* yacc.c:1645  */
    {
		//<<
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:<<\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1937 "y.tab.c" /* yacc.c:1645  */
    break;

  case 34:
#line 256 "myparser.y" /* yacc.c:1645  */
    {
		//>>
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:>>\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1949 "y.tab.c" /* yacc.c:1645  */
    break;

  case 35:
#line 267 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("relational_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 1958 "y.tab.c" /* yacc.c:1645  */
    break;

  case 36:
#line 271 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:<\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1969 "y.tab.c" /* yacc.c:1645  */
    break;

  case 37:
#line 277 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:>\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1980 "y.tab.c" /* yacc.c:1645  */
    break;

  case 38:
#line 283 "myparser.y" /* yacc.c:1645  */
    {
		// <= 
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:<=\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 1992 "y.tab.c" /* yacc.c:1645  */
    break;

  case 39:
#line 290 "myparser.y" /* yacc.c:1645  */
    {
		// >=
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:>=\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2004 "y.tab.c" /* yacc.c:1645  */
    break;

  case 40:
#line 301 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("equality_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2013 "y.tab.c" /* yacc.c:1645  */
    break;

  case 41:
#line 305 "myparser.y" /* yacc.c:1645  */
    {
		// ==
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:==\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2025 "y.tab.c" /* yacc.c:1645  */
    break;

  case 42:
#line 312 "myparser.y" /* yacc.c:1645  */
    {
		// !=
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:!=\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2037 "y.tab.c" /* yacc.c:1645  */
    break;

  case 43:
#line 322 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("and_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2046 "y.tab.c" /* yacc.c:1645  */
    break;

  case 44:
#line 326 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:&\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2057 "y.tab.c" /* yacc.c:1645  */
    break;

  case 45:
#line 336 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("exclusive_or_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2066 "y.tab.c" /* yacc.c:1645  */
    break;

  case 46:
#line 340 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:^\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2077 "y.tab.c" /* yacc.c:1645  */
    break;

  case 47:
#line 350 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("inclusive_or_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2086 "y.tab.c" /* yacc.c:1645  */
    break;

  case 48:
#line 354 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:|\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2097 "y.tab.c" /* yacc.c:1645  */
    break;

  case 49:
#line 364 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("logical_and_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2106 "y.tab.c" /* yacc.c:1645  */
    break;

  case 50:
#line 368 "myparser.y" /* yacc.c:1645  */
    {
		//&&
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:&&\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2118 "y.tab.c" /* yacc.c:1645  */
    break;

  case 51:
#line 379 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("logical_or_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2127 "y.tab.c" /* yacc.c:1645  */
    break;

  case 52:
#line 383 "myparser.y" /* yacc.c:1645  */
    {
		//||
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:||\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2139 "y.tab.c" /* yacc.c:1645  */
    break;

  case 53:
#line 394 "myparser.y" /* yacc.c:1645  */
    {
		//条件表达式
		(yyval.gt) = create_tree("assignment_expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2149 "y.tab.c" /* yacc.c:1645  */
    break;

  case 54:
#line 399 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:%s\t\tChildren: ", (yyval.gt)->no, (yyvsp[-1].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2160 "y.tab.c" /* yacc.c:1645  */
    break;

  case 55:
#line 409 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2169 "y.tab.c" /* yacc.c:1645  */
    break;

  case 56:
#line 413 "myparser.y" /* yacc.c:1645  */
    {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2179 "y.tab.c" /* yacc.c:1645  */
    break;

  case 57:
#line 418 "myparser.y" /* yacc.c:1645  */
    {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2189 "y.tab.c" /* yacc.c:1645  */
    break;

  case 58:
#line 423 "myparser.y" /* yacc.c:1645  */
    {
		// %=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2199 "y.tab.c" /* yacc.c:1645  */
    break;

  case 59:
#line 428 "myparser.y" /* yacc.c:1645  */
    {
		// += 
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2209 "y.tab.c" /* yacc.c:1645  */
    break;

  case 60:
#line 433 "myparser.y" /* yacc.c:1645  */
    {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2219 "y.tab.c" /* yacc.c:1645  */
    break;

  case 61:
#line 438 "myparser.y" /* yacc.c:1645  */
    {
		// <<=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2229 "y.tab.c" /* yacc.c:1645  */
    break;

  case 62:
#line 443 "myparser.y" /* yacc.c:1645  */
    {
		// >>=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2239 "y.tab.c" /* yacc.c:1645  */
    break;

  case 63:
#line 448 "myparser.y" /* yacc.c:1645  */
    {
		// &=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2249 "y.tab.c" /* yacc.c:1645  */
    break;

  case 64:
#line 453 "myparser.y" /* yacc.c:1645  */
    {
		// ^=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2259 "y.tab.c" /* yacc.c:1645  */
    break;

  case 65:
#line 458 "myparser.y" /* yacc.c:1645  */
    {
		// |=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2269 "y.tab.c" /* yacc.c:1645  */
    break;

  case 66:
#line 467 "myparser.y" /* yacc.c:1645  */
    {
		//赋值表达式
		(yyval.gt) = create_tree("expression",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2279 "y.tab.c" /* yacc.c:1645  */
    break;

  case 67:
#line 472 "myparser.y" /* yacc.c:1645  */
    {
		//逗号表达式
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2291 "y.tab.c" /* yacc.c:1645  */
    break;

  case 68:
#line 483 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("declaration",1,(yyvsp[-1].gt)); //?
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2300 "y.tab.c" /* yacc.c:1645  */
    break;

  case 69:
#line 487 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[-2].gt),(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 2309 "y.tab.c" /* yacc.c:1645  */
    break;

  case 70:
#line 491 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2318 "y.tab.c" /* yacc.c:1645  */
    break;

  case 71:
#line 499 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("init_declarator_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2327 "y.tab.c" /* yacc.c:1645  */
    break;

  case 72:
#line 503 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2338 "y.tab.c" /* yacc.c:1645  */
    break;

  case 73:
#line 512 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("init_declarator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2347 "y.tab.c" /* yacc.c:1645  */
    break;

  case 74:
#line 516 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:=\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2358 "y.tab.c" /* yacc.c:1645  */
    break;

  case 75:
#line 527 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tType Specifier,\t\tvoid\t\tChildren:\n", (yyval.gt)->no);
	}
#line 2368 "y.tab.c" /* yacc.c:1645  */
    break;

  case 76:
#line 532 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tType Specifier,\t\tchar\t\tChildren:\n", (yyval.gt)->no);
	}
#line 2378 "y.tab.c" /* yacc.c:1645  */
    break;

  case 77:
#line 537 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tType Specifier,\t\tint\t\tChildren:\n", (yyval.gt)->no);
	}
#line 2388 "y.tab.c" /* yacc.c:1645  */
    break;

  case 78:
#line 542 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tType Specifier,\t\tdouble\t\tChildren:\n", (yyval.gt)->no);	
	}
#line 2398 "y.tab.c" /* yacc.c:1645  */
    break;

  case 79:
#line 547 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tType Specifier,\t\tbool\t\tChildren:\n", (yyval.gt)->no);
	}
#line 2408 "y.tab.c" /* yacc.c:1645  */
    break;

  case 80:
#line 557 "myparser.y" /* yacc.c:1645  */
    {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tID Declaration,\t\tsymbol:%s\tChildren:\n", (yyval.gt)->no, (yyvsp[0].gt)->content.c_str());
	}
#line 2419 "y.tab.c" /* yacc.c:1645  */
    break;

  case 81:
#line 563 "myparser.y" /* yacc.c:1645  */
    {
		//.....
		(yyval.gt) = create_tree("declarator",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2429 "y.tab.c" /* yacc.c:1645  */
    break;

  case 82:
#line 568 "myparser.y" /* yacc.c:1645  */
    {
		//数组
		//printf("assignment_expression");
		(yyval.gt) = create_tree("declarator",2,(yyvsp[-3].gt),(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tArray Declaration,\tsymbol:%s, interval: %s\tChildren:", (yyval.gt)->no, (yyvsp[-3].gt)->content.c_str(), (yyvsp[-1].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2442 "y.tab.c" /* yacc.c:1645  */
    break;

  case 83:
#line 576 "myparser.y" /* yacc.c:1645  */
    {
		//....
		(yyval.gt) = create_tree("declarator",1,(yyvsp[-3].gt));
		(yyval.gt)->no = NUM++;
		printf("%d:\tArray Declaration,\tsymbol:%s\tChildren:\n", (yyval.gt)->no, (yyvsp[-3].gt)->content.c_str());
	}
#line 2453 "y.tab.c" /* yacc.c:1645  */
    break;

  case 84:
#line 582 "myparser.y" /* yacc.c:1645  */
    {
		//数组
		(yyval.gt) = create_tree("declarator",1,(yyvsp[-2].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tArray Declaration,\tsymbol:%s\tChildren:", (yyval.gt)->no, (yyvsp[-2].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2465 "y.tab.c" /* yacc.c:1645  */
    break;

  case 85:
#line 589 "myparser.y" /* yacc.c:1645  */
    {
		//函数
		(yyval.gt) = create_tree("declarator",2,(yyvsp[-3].gt),(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tFunction Declaration,\tsymbol:%s, interval: %s\tChildren:", (yyval.gt)->no, (yyvsp[-3].gt)->content.c_str(), (yyvsp[-1].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2477 "y.tab.c" /* yacc.c:1645  */
    break;

  case 86:
#line 596 "myparser.y" /* yacc.c:1645  */
    {
		//函数
		(yyval.gt) = create_tree("declarator",2,(yyvsp[-3].gt),(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tFunction Declaration,\tsymbol:%s, interval: %s\tChildren:", (yyval.gt)->no, (yyvsp[-3].gt)->content.c_str(), (yyvsp[-1].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2489 "y.tab.c" /* yacc.c:1645  */
    break;

  case 87:
#line 603 "myparser.y" /* yacc.c:1645  */
    {
		//函数
		(yyval.gt) = create_tree("declarator",1,(yyvsp[-2].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tFunction Declaration,\tsymbol:%s\tChildren:", (yyval.gt)->no, (yyvsp[-2].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2501 "y.tab.c" /* yacc.c:1645  */
    break;

  case 88:
#line 615 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2510 "y.tab.c" /* yacc.c:1645  */
    break;

  case 89:
#line 619 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("parameter_list",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2521 "y.tab.c" /* yacc.c:1645  */
    break;

  case 90:
#line 628 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2530 "y.tab.c" /* yacc.c:1645  */
    break;

  case 91:
#line 632 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2539 "y.tab.c" /* yacc.c:1645  */
    break;

  case 92:
#line 636 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2548 "y.tab.c" /* yacc.c:1645  */
    break;

  case 93:
#line 643 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2557 "y.tab.c" /* yacc.c:1645  */
    break;

  case 94:
#line 647 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("identifier_list",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2568 "y.tab.c" /* yacc.c:1645  */
    break;

  case 95:
#line 656 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2577 "y.tab.c" /* yacc.c:1645  */
    break;

  case 96:
#line 660 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyval.gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2586 "y.tab.c" /* yacc.c:1645  */
    break;

  case 97:
#line 664 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2595 "y.tab.c" /* yacc.c:1645  */
    break;

  case 98:
#line 668 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyvsp[-2].gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 2604 "y.tab.c" /* yacc.c:1645  */
    break;

  case 99:
#line 672 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-3].gt),(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tArray Declaration,\tsymbol:%s, interval: %s\tChildren:", (yyval.gt)->no, (yyvsp[-3].gt)->content.c_str(), (yyvsp[-1].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 2615 "y.tab.c" /* yacc.c:1645  */
    break;

  case 100:
#line 678 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyval.gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 2624 "y.tab.c" /* yacc.c:1645  */
    break;

  case 101:
#line 682 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyvsp[-3].gt));
		(yyval.gt)->no = (yyvsp[-3].gt)->no;
	}
#line 2633 "y.tab.c" /* yacc.c:1645  */
    break;

  case 102:
#line 686 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyval.gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2642 "y.tab.c" /* yacc.c:1645  */
    break;

  case 103:
#line 690 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2651 "y.tab.c" /* yacc.c:1645  */
    break;

  case 104:
#line 694 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",1,(yyvsp[-2].gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 2660 "y.tab.c" /* yacc.c:1645  */
    break;

  case 105:
#line 698 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-3].gt),(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-3].gt)->no;
	}
#line 2669 "y.tab.c" /* yacc.c:1645  */
    break;

  case 106:
#line 706 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2678 "y.tab.c" /* yacc.c:1645  */
    break;

  case 107:
#line 710 "myparser.y" /* yacc.c:1645  */
    {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2688 "y.tab.c" /* yacc.c:1645  */
    break;

  case 108:
#line 715 "myparser.y" /* yacc.c:1645  */
    {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",1,(yyvsp[-2].gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 2698 "y.tab.c" /* yacc.c:1645  */
    break;

  case 109:
#line 723 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2707 "y.tab.c" /* yacc.c:1645  */
    break;

  case 110:
#line 727 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2716 "y.tab.c" /* yacc.c:1645  */
    break;

  case 111:
#line 731 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2727 "y.tab.c" /* yacc.c:1645  */
    break;

  case 112:
#line 737 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-3].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tVar Declaration,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2738 "y.tab.c" /* yacc.c:1645  */
    break;

  case 113:
#line 746 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("designation",1,(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tExpr,\t\t\top:=\t\tChildren: ", (yyval.gt)->no);
	}
#line 2748 "y.tab.c" /* yacc.c:1645  */
    break;

  case 114:
#line 754 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2757 "y.tab.c" /* yacc.c:1645  */
    break;

  case 115:
#line 758 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2766 "y.tab.c" /* yacc.c:1645  */
    break;

  case 116:
#line 765 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("designator",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2775 "y.tab.c" /* yacc.c:1645  */
    break;

  case 117:
#line 769 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("designator",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2784 "y.tab.c" /* yacc.c:1645  */
    break;

  case 118:
#line 777 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2793 "y.tab.c" /* yacc.c:1645  */
    break;

  case 119:
#line 781 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2802 "y.tab.c" /* yacc.c:1645  */
    break;

  case 120:
#line 785 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2811 "y.tab.c" /* yacc.c:1645  */
    break;

  case 121:
#line 789 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2820 "y.tab.c" /* yacc.c:1645  */
    break;

  case 122:
#line 793 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2829 "y.tab.c" /* yacc.c:1645  */
    break;

  case 123:
#line 797 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2838 "y.tab.c" /* yacc.c:1645  */
    break;

  case 124:
#line 805 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("labeled_statement",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
	}
#line 2847 "y.tab.c" /* yacc.c:1645  */
    break;

  case 125:
#line 809 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-3].gt)->no;
		printNo((yyval.gt));
	}
#line 2857 "y.tab.c" /* yacc.c:1645  */
    break;

  case 126:
#line 818 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("compound_statement",1,(yyval.gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tCompoundK statement,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2868 "y.tab.c" /* yacc.c:1645  */
    break;

  case 127:
#line 824 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree((yyvsp[-1].gt)->content.c_str(),1,(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tCompoundK statement,\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2879 "y.tab.c" /* yacc.c:1645  */
    break;

  case 128:
#line 833 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2888 "y.tab.c" /* yacc.c:1645  */
    break;

  case 129:
#line 837 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2897 "y.tab.c" /* yacc.c:1645  */
    break;

  case 130:
#line 844 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2906 "y.tab.c" /* yacc.c:1645  */
    break;

  case 131:
#line 848 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2915 "y.tab.c" /* yacc.c:1645  */
    break;

  case 132:
#line 855 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 2924 "y.tab.c" /* yacc.c:1645  */
    break;

  case 133:
#line 859 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[-1].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 2933 "y.tab.c" /* yacc.c:1645  */
    break;

  case 134:
#line 867 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("selection_statement",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tJudgementK statement,\tif\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2944 "y.tab.c" /* yacc.c:1645  */
    break;

  case 135:
#line 873 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("selection_statement",3,(yyvsp[-4].gt),(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tJudgementK statement,\tif...else\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2955 "y.tab.c" /* yacc.c:1645  */
    break;

  case 136:
#line 879 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("selection_statement",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tJudgementK statement,\tswitch\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2966 "y.tab.c" /* yacc.c:1645  */
    break;

  case 137:
#line 889 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("iteration_statement",2,(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tRepeatK statement,\twhile\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2977 "y.tab.c" /* yacc.c:1645  */
    break;

  case 138:
#line 895 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("iteration_statement",2,(yyvsp[-5].gt),(yyvsp[-2].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tRepeatK statement,\tdo...while\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2988 "y.tab.c" /* yacc.c:1645  */
    break;

  case 139:
#line 901 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("iteration_statement",3,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 2999 "y.tab.c" /* yacc.c:1645  */
    break;

  case 140:
#line 907 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("iteration_statement",4,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 3010 "y.tab.c" /* yacc.c:1645  */
    break;

  case 141:
#line 913 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("iteration_statement",3,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 3021 "y.tab.c" /* yacc.c:1645  */
    break;

  case 142:
#line 919 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("iteration_statement",4,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tRepeatK statement,\tfor\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 3032 "y.tab.c" /* yacc.c:1645  */
    break;

  case 143:
#line 929 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("jump_statement",1,(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tGoto statement,\t\tChildren: ", (yyval.gt)->no);
		printNo((yyval.gt));
	}
#line 3043 "y.tab.c" /* yacc.c:1645  */
    break;

  case 144:
#line 935 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tContinue statement,\t\tChildren: ", (yyval.gt)->no);
	}
#line 3053 "y.tab.c" /* yacc.c:1645  */
    break;

  case 145:
#line 940 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tBreak statement,\t\tChildren: ", (yyval.gt)->no);
	}
#line 3063 "y.tab.c" /* yacc.c:1645  */
    break;

  case 146:
#line 945 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tReturn statement,\t\tChildren: ", (yyval.gt)->no);
	}
#line 3073 "y.tab.c" /* yacc.c:1645  */
    break;

  case 147:
#line 950 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("jump_statement",1,(yyvsp[-1].gt));
		(yyval.gt)->no = NUM ++;
		printf("%d:\tReutrn statement,\t\tto:%s\tChildren: ", (yyval.gt)->no, (yyvsp[-1].gt)->content.c_str());
		printNo((yyval.gt));
	}
#line 3084 "y.tab.c" /* yacc.c:1645  */
    break;

  case 148:
#line 959 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 3093 "y.tab.c" /* yacc.c:1645  */
    break;

  case 149:
#line 963 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 3102 "y.tab.c" /* yacc.c:1645  */
    break;

  case 150:
#line 970 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
		//函数定义
		//printf("function_definition");
		printNo((yyval.gt));
	}
#line 3114 "y.tab.c" /* yacc.c:1645  */
    break;

  case 151:
#line 977 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
		//变量声明
		//printf("declaration");
		printNo((yyval.gt));
	}
#line 3126 "y.tab.c" /* yacc.c:1645  */
    break;

  case 152:
#line 987 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-3].gt)->no;
		printNo((yyval.gt));
	}
#line 3136 "y.tab.c" /* yacc.c:1645  */
    break;

  case 153:
#line 992 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-2].gt)->no;
		printNo((yyval.gt));
	}
#line 3146 "y.tab.c" /* yacc.c:1645  */
    break;

  case 154:
#line 1000 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[0].gt)->no;
	}
#line 3155 "y.tab.c" /* yacc.c:1645  */
    break;

  case 155:
#line 1004 "myparser.y" /* yacc.c:1645  */
    {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
		(yyval.gt)->no = (yyvsp[-1].gt)->no;
	}
#line 3164 "y.tab.c" /* yacc.c:1645  */
    break;


#line 3168 "y.tab.c" /* yacc.c:1645  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 1010 "myparser.y" /* yacc.c:1903  */


extern int column;
int success = 1;

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	
	yyparse();
	printf("\n");
	//eval(root,0);	//输出语法分析树

	freeGramTree(root);

	fclose(yyin);
	return 0;
}

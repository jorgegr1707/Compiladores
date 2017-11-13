/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parser2.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define KRED "\x1B[31m"
#define KNRM "\x1B[0m"

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s);

#line 81 "parser2.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser2.tab.h".  */
#ifndef YY_YY_PARSER2_TAB_H_INCLUDED
# define YY_YY_PARSER2_TAB_H_INCLUDED
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
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    TYPEDEF_NAME = 262,
    ENUMERATION_CONSTANT = 263,
    FUNC_NAME = 264,
    SIZEOF = 265,
    PTR_OP = 266,
    INC_OP = 267,
    DEC_OP = 268,
    LEFT_OP = 269,
    RIGHT_OP = 270,
    LE_OP = 271,
    GE_OP = 272,
    EQ_OP = 273,
    NE_OP = 274,
    AND_OP = 275,
    OR_OP = 276,
    MUL_ASSIGN = 277,
    DIV_ASSIGN = 278,
    MOD_ASSIGN = 279,
    ADD_ASSIGN = 280,
    SUB_ASSIGN = 281,
    LEFT_ASSIGN = 282,
    RIGHT_ASSIGN = 283,
    AND_ASSIGN = 284,
    XOR_ASSIGN = 285,
    OR_ASSIGN = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330,
    LOWER_THAN_ELSE = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "parser2.y" /* yacc.c:355  */

	char *sval;

#line 202 "parser2.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 217 "parser2.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  336
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  617

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      77,    78,    87,    88,    79,    89,    83,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,   100,
      94,    99,    95,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    97,    85,    90,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    56,    57,    61,    62,
      63,    67,    71,    72,    76,    80,    81,    85,    86,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   101,
     102,   103,   104,   105,   106,   110,   111,   115,   116,   117,
     118,   119,   120,   121,   123,   127,   128,   129,   130,   131,
     132,   136,   137,   139,   143,   144,   145,   146,   150,   151,
     152,   156,   157,   158,   162,   163,   164,   165,   166,   170,
     171,   172,   176,   177,   181,   182,   186,   187,   191,   192,
     196,   197,   201,   202,   206,   207,   208,   209,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   227,
     228,   232,   236,   237,   238,   240,   241,   242,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     262,   263,   267,   268,   272,   273,   274,   275,   276,   277,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   300,   301,   302,   304,
     308,   309,   313,   314,   318,   319,   320,   324,   325,   326,
     327,   331,   332,   336,   337,   338,   342,   343,   344,   345,
     346,   350,   351,   355,   356,   360,   364,   365,   366,   367,
     371,   372,   376,   377,   381,   382,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     414,   415,   416,   417,   422,   423,   428,   429,   433,   434,
     438,   439,   440,   444,   445,   449,   450,   454,   455,   456,
     458,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   502,   503,   504,
     508,   509,   510,   511,   515,   519,   520,   524,   525,   529,
     533,   534,   535,   536,   537,   538,   542,   543,   544,   546,
     547,   548,   552,   553,   557,   558,   562,   563,   567,   568,
     572,   573,   574,   576,   577,   578,   579,   580,   584,   585,
     586,   587,   588,   589,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   604,   605,   606,   607,   608,   612,
     613,   617,   618,   622,   623,   627,   628
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "LOWER_THAN_ELSE", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "program", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    40,    41,    44,
      58,    91,    93,    46,   123,   125,    38,    42,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    63,    61,
      59
};
# endif

#define YYPACT_NINF -379

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-379)))

#define YYTABLE_NINF -324

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7303,  3000,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,     5,   -53,   -26,  -379,
     -13,  -379,  -379,    89,  2430,  2499,  -379,    43,  -379,  -379,
    2568,  2637,  2706,  -379,  7248,  -379,  -379,  2775,  -379,    34,
      -4,  -379,  -379,   -51,  -379,    68,   -29,    29,   -11,    78,
    5220,  7506,  6498,    73,  -379,   -41,  2931,  -379,  -379,  -379,
      95,  7408,  -379,  -379,  -379,  -379,  -379,   108,  -379,  -379,
    -379,    -4,    34,  -379,  6245,  7137,  5476,   -29,    78,  -379,
      94,   -23,  -379,  2033,  -379,  -379,  -379,  -379,  -379,  -379,
    6520,  6542,  6542,   118,   128,  5275,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,   343,  -379,  6498,  -379,
     -15,   126,   204,   148,   208,   123,   145,   161,   233,    32,
    -379,   183,  7506,   262,  7506,   191,   201,   219,  -379,  -379,
    1842,  -379,    89,  -379,  7082,  7408,   723,  -379,   133,  -379,
    -379,  -379,  -379,  -379,  2064,  6132,  2862,  -379,  -379,  -379,
    6802,  -379,  -379,   104,   226,   235,  -379,   152,  3658,  5818,
    -379,   230,   234,  5499,   -14,  6498,    15,  -379,  -379,  5330,
    -379,  5330,  -379,  -379,  7506,  6568,  3690,  -379,   156,   241,
     317,  -379,  -379,  6267,  6590,   324,  -379,  6498,  6498,  6498,
    6498,  6498,  6498,  6498,  6498,  6498,  6498,  6498,  6498,  6498,
    6498,  6498,  6498,  6498,  6498,  6568,  -379,  -379,    97,  7026,
    5590,    97,  -379,   115,  -379,  -379,  -379,   323,  1642,   253,
    6498,   254,   259,   261,   267,  3055,   268,   344,   246,   257,
     650,  -379,  -379,   -40,  -379,  -379,  -379,  -379,  1940,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  2159,  -379,  -379,  6498,
    -379,   -34,  -379,   281,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  6568,  6498,   359,  -379,   -10,
    6245,   -20,  -379,  6568,  6568,  -379,  6970,  -379,   130,  -379,
    -379,  7358,  -379,   361,  6568,  -379,   283,   289,   286,  4471,
     288,  5840,  -379,  -379,  4570,  6612,  -379,   293,   295,    28,
    -379,  -379,  -379,  -379,  3789,   300,   303,   304,   292,  6315,
    -379,  6568,  6358,  -379,  3820,  -379,   159,  -379,  3919,    80,
    -379,  -379,  -379,  -379,   -15,   -15,   126,   126,   204,   204,
     204,   204,   148,   148,   208,   123,   145,   161,   233,   167,
     115,  6858,  -379,   306,   307,  3950,  5862,  -379,   301,   308,
    5613,   115,  7192,  5704,   309,  1742,  -379,  5385,    -4,  3125,
     312,  3165,  6638,  6568,  6660,  2164,   331,  2264,   296,  -379,
    -379,  -379,   -32,  -379,  -379,  -379,  -379,  -379,   100,  -379,
    6498,  -379,   313,  -379,  3008,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,   316,  -379,  -379,  -379,   319,  -379,
    4601,   321,  -379,  4700,   322,  -379,  -379,  -379,   302,   326,
     326,  -379,  7457,  6132,  -379,  -379,  6223,  -379,  -379,  -379,
    6568,  -379,  -379,  6498,  -379,  -379,  -379,  6568,  -379,  4731,
     325,  5953,  -379,  -379,  6682,  -379,   329,  6914,  -379,   330,
    4049,  5975,  -379,   333,   334,  5727,   318,   842,  -379,  3235,
     942,  -379,  4081,   170,   173,  4180,   178,   335,   336,  2319,
    2830,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  6245,  -379,
    -379,  -379,  -379,  -379,  -379,   339,   188,  -379,   341,     1,
    4211,     6,  -379,  -379,   340,  -379,   345,  -379,  4830,   346,
    4861,   347,  -379,  -379,  -379,  6568,   349,  4960,   350,  5997,
    -379,  -379,  4991,  6708,  -379,   351,  -379,  1042,  -379,  3275,
    3345,  3275,  3275,  3385,  6568,  6730,  2357,  6385,  2357,  6407,
    -379,  6568,  -379,  7457,  6568,  6088,  -379,   338,  -379,  6110,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,   352,  -379,  -379,
     354,  -379,  5090,   355,  -379,  5121,   357,  -379,   365,  1142,
     381,  -379,  -379,  1242,  -379,   194,  4310,   196,   203,  4341,
    3275,   207,   210,  4440,  3275,   212,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  3275,  3275,
    3455,   342,   353,   356,  3275,  3275,  -379,  3495,  3275,  3275,
    -379,  3565,  -379,  -379,  1342,  -379,  -379,  -379,  -379,  -379,
    -379,  1442,  -379,  -379,  -379,  1542,  -379
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   145,   124,   125,   126,   128,   129,   180,   176,
     177,   178,   139,   131,   132,   133,   134,   137,   138,   135,
     136,   130,   140,   141,   150,   151,     0,     0,   179,   181,
       0,   127,   332,     0,     0,     0,   143,     0,   144,   142,
       0,     0,     0,   104,     0,   329,   331,     0,   186,     0,
     213,   105,   118,     0,   120,   123,   185,     0,   170,     0,
       0,     0,     0,     0,   102,     0,     0,   108,   110,   149,
     148,     0,   112,   114,   116,     1,   330,     0,   179,   214,
     212,   211,     0,   106,     0,     0,     0,   184,     0,    11,
     174,     0,   171,     0,     2,     8,     9,    12,    10,    13,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    19,     3,     4,     6,    37,    51,     0,    54,
      58,    61,    64,    69,    72,    74,    76,    78,    80,    82,
     101,     0,   158,     0,   160,     0,     0,     0,   107,   103,
       0,   335,     0,   334,     0,     0,     0,   152,     0,   156,
     187,   215,   210,   121,     0,     0,     0,    84,   269,   122,
       0,   223,   198,     0,     0,   217,   218,     0,     0,     0,
     188,    46,     0,     0,     0,     0,     0,   166,    44,     0,
      41,     0,    38,    39,     0,     0,     0,    99,     0,     0,
       0,    25,    26,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   157,     0,     0,
       0,   228,   225,   229,   159,   182,   175,     0,     0,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   298,     0,   296,   297,   280,   281,     0,   294,
     282,   283,   284,   285,   336,   333,     0,   146,   153,     0,
     154,     0,   161,   165,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    88,     0,     0,     0,   271,     0,
       0,     0,   275,     0,     0,   209,     0,   220,   228,   221,
     197,     0,   199,     0,     0,   208,    46,    44,     0,     0,
       0,     0,   189,   196,     0,     0,   195,    46,     0,     0,
     168,   173,   167,   172,     0,     0,     0,     0,     0,     0,
       5,     0,     0,    24,     0,    21,     0,    35,     0,     0,
      23,    55,    56,    57,    59,    60,    62,    63,    67,    68,
      65,    66,    70,    71,    73,    75,    77,    79,    81,     0,
     230,     0,   248,     0,     0,     0,     0,   232,    46,     0,
       0,   227,     0,     0,     0,     0,     2,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   325,
     326,   327,     0,   299,   293,   295,   147,   163,     0,   155,
       0,    87,     0,   278,     0,   267,   270,   274,   276,    86,
      85,   216,   219,   224,     0,   203,   206,   202,     0,   191,
       0,     0,   207,     0,     0,   192,   194,   169,     0,    42,
       0,    43,     0,     0,    53,   100,     0,    52,    30,    22,
       0,    29,    20,     0,   258,   249,   231,     0,   257,     0,
       0,     0,   233,   239,     0,   238,     0,     0,   250,     0,
       0,     0,   240,    46,     0,     0,     0,     0,   286,     0,
       0,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   324,   328,   162,   164,   277,   268,   273,     0,   204,
     200,   201,   190,   205,   193,     0,     0,    15,     0,     0,
       0,     0,    36,    83,     0,   254,     0,   235,     0,     0,
       0,     0,   237,   266,   251,     0,     0,     0,     0,     0,
     241,   247,     0,     0,   246,     0,   279,     0,   287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     272,     0,    14,     0,     0,     0,    32,     0,    31,     0,
      27,   255,   253,   252,   234,   256,   236,     0,   262,   261,
       0,   243,     0,     0,   263,     0,     0,   244,   306,     0,
     300,   302,   314,     0,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    16,    17,    34,
      33,    28,   264,   259,   260,   242,   265,   245,     0,     0,
       0,     0,     0,     0,     0,     0,   312,     0,     0,     0,
     310,     0,   303,   304,     0,   301,   316,   317,   309,   321,
     322,     0,   313,   318,   319,     0,   311
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,  -379,  -379,  -379,  -379,  -379,  -379,   -83,  -379,  -379,
     -60,  -379,     4,    96,    98,    18,   101,   248,   240,   247,
     249,   251,  -379,   -59,   305,   314,   -80,   -55,   -36,   236,
     -18,   386,  -379,   -50,  -379,  -379,   327,  -137,   -58,  -379,
      83,  -379,   387,  -154,  -379,   179,  -379,  -379,    21,   -43,
     -31,   -57,   -79,  -379,   185,  -379,   -56,  -106,  -195,   -72,
    -229,  -378,  -379,   198,   -28,   116,  -379,   -46,  -379,   238,
    -360,  -379,  -379,  -379,  -379,   437,  -379,  -379
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   112,   113,    90,   114,   115,   486,   487,   116,   326,
     156,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   157,   187,   275,   243,   131,    32,    52,
      53,    54,    34,    35,    36,    37,   146,   147,   133,   261,
     262,    38,    91,    92,    39,    40,    41,    42,    55,    56,
      57,    81,   353,   165,   166,   167,   189,   354,   223,   278,
     279,   280,   281,   282,    43,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    44,    45,    46,   144
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     117,   130,   117,   130,   135,   136,   164,   137,    58,   258,
     132,   132,   159,   148,    87,    65,   478,   470,    89,    80,
     143,   132,   313,   350,    60,   188,   361,   222,    82,   173,
     141,    89,    48,   117,     9,    10,    11,    48,    82,   321,
     180,   182,   183,   149,    69,   388,    70,   321,    85,    83,
     152,    61,    86,   214,    66,   132,   176,   289,   117,   139,
     383,   276,   177,   277,    62,   309,   389,    78,   472,   394,
      77,   310,   197,    88,   217,   395,   224,   198,   199,   397,
     535,    89,   132,    50,   132,   539,   536,   148,   148,    59,
      63,   540,    48,   361,   117,   132,   132,   178,   255,   188,
     312,   188,   221,    48,   244,   218,    49,    48,   254,   527,
     529,    49,   301,   417,   329,   117,   130,   149,   149,   258,
     311,    50,   196,   315,    65,   316,   117,    71,   317,   132,
     215,   132,   288,    48,   132,   349,    48,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   313,   350,   478,   178,   321,
     382,   478,   432,   360,   204,   205,    49,    84,   117,   263,
     117,   130,   297,   138,   219,   370,    50,    49,   220,   145,
     259,   286,  -222,  -222,   287,   220,   150,    50,   221,    64,
     178,    50,   362,   175,   489,   184,   363,   491,   148,   117,
     130,   331,   332,   333,   387,   185,   132,   286,   396,   210,
      49,   220,   244,   259,   200,   201,   117,   130,   202,   203,
      50,   392,   338,   339,   340,   341,   208,   209,   149,    79,
     292,   293,   178,   260,   320,   321,    33,   429,   430,   134,
     134,   211,   206,   207,   117,    87,   321,   433,   520,   321,
     134,   521,   321,   213,   117,   288,   523,   321,   212,   117,
     151,   216,   117,   218,   117,    79,   532,   533,   117,   225,
      67,    68,   591,   321,   593,   321,    72,    73,    74,   226,
      33,   594,   321,   449,   134,   597,   321,   188,   598,   321,
     601,   321,   463,   464,   466,   117,   334,   335,   227,   441,
     336,   337,   142,   297,   290,   117,   455,    77,   178,   342,
     343,   134,   302,   134,   291,   117,   303,   132,   178,   322,
     323,   163,   477,   424,   134,   134,   427,   330,   178,   364,
     117,   130,   178,   369,   371,   474,   372,    80,   373,   219,
    -226,   469,  -226,   220,   374,   377,   379,   378,    79,    50,
     117,   376,   151,   117,   190,   191,   192,   380,   134,   178,
     134,   390,   393,   134,   403,   405,   488,   -54,   406,   178,
     409,   422,   132,   117,   493,   415,   142,   416,   419,   178,
     142,   420,   421,   442,   435,   436,   423,   456,    77,   158,
     443,   172,   459,   468,   509,   475,   471,   117,   479,    79,
     117,   480,   117,   482,   484,   117,   530,   497,   504,   263,
     426,   502,   524,   525,   178,   510,   511,   178,   516,   531,
     193,   534,   541,   580,   194,   588,   195,   542,   544,   546,
     117,   548,   551,   557,   582,   134,   583,   585,   117,   587,
     117,   590,   606,   297,   565,   567,   568,   571,   572,   575,
     577,   345,   117,   607,   297,   163,   608,   117,   344,   346,
     158,   178,   347,   477,   178,   348,   178,   477,   153,   178,
     284,   473,   256,   298,   300,   174,   402,   488,   308,   398,
     151,    76,     0,   132,   142,   458,   385,   461,     0,     0,
     318,     0,   117,     0,   178,   117,     0,     0,   327,   117,
       0,     0,   178,   117,   178,     0,   117,     0,     0,   117,
       0,   297,     0,   117,     0,     0,   178,     0,     0,     0,
       0,   178,   163,     0,     0,   359,     0,   163,     0,     0,
     297,     0,   297,     0,     0,    79,     0,     0,     0,   151,
       0,     0,    79,     0,   117,     0,   134,    79,     0,     0,
       0,   117,     0,     0,     0,   117,   178,     0,     0,   178,
       0,     0,     0,   178,     0,     0,     0,   178,     0,     0,
     178,     0,     0,   178,     0,   518,     0,   178,     0,     0,
     391,     0,     0,     0,     0,   158,     0,     0,   399,   400,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   404,
       0,   134,     0,     0,   408,     0,   411,     0,   178,     0,
     414,     0,     0,   142,     0,   178,     0,     0,     0,   178,
     151,     0,     0,     0,     0,     0,   425,     0,     0,     0,
      79,     0,     0,     0,   151,   558,   560,   561,   562,   564,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,    94,    95,    96,    97,     0,    98,    99,
     100,   440,   101,   102,     0,   446,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   596,     0,   151,     0,
     600,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,   602,   603,   605,     0,     0,     0,
     609,   610,   134,   612,   613,   614,     0,   616,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,   158,     0,
       2,   158,     0,     0,     0,   492,   106,   107,   108,   109,
     110,   111,   494,     0,   496,     0,   499,     0,     0,   501,
     381,     0,     0,     0,     0,   506,   508,     0,     0,     0,
     515,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,     0,
     547,     0,   550,     0,   553,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   576,     0,     0,   578,
     158,     0,     0,    93,   158,    94,    95,    96,    97,  -289,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,     0,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,   103,  -289,   104,  -289,  -289,  -289,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -289,  -289,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -291,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,     0,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,   103,  -291,   104,  -291,  -291,  -291,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -291,  -291,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -290,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,     0,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,   103,  -290,   104,  -290,  -290,  -290,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -290,  -290,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -307,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,     0,  -307,
    -307,  -307,   589,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,   103,  -307,   104,  -307,  -307,  -307,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -307,  -307,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -315,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,     0,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   103,  -315,   104,  -315,  -315,  -315,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -315,  -315,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -305,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,     0,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,   103,  -305,   104,  -305,  -305,  -305,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -305,  -305,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -323,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,     0,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,   103,  -323,   104,  -323,  -323,  -323,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -323,  -323,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,    93,     0,    94,    95,    96,    97,  -320,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,     0,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,   103,  -320,   104,  -320,  -320,  -320,     0,   105,
       0,    -7,     0,    -7,     0,    -7,  -320,  -320,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    -7,   365,     0,   366,    95,    96,    97,     2,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,   103,    28,   104,    29,     0,    31,     0,   367,
       0,    -7,     0,    -7,     0,    -7,     0,     0,   106,   368,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   274,    51,   365,     0,    94,    95,    96,    97,     2,
      98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,   103,    28,   104,    29,     0,    31,     0,   105,
       0,    -7,     0,    -7,     0,    -7,     0,     0,   106,   107,
     108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   228,     0,   229,    95,    96,    97,     2,
      98,    99,   100,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,   230,
     231,   232,     0,   233,   234,   235,   236,   237,   238,   239,
     240,    27,   103,    28,   104,    29,    30,    31,     0,   105,
       0,     0,     0,     0,     0,     0,   140,   241,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,   228,   242,   229,    95,    96,    97,     2,    98,    99,
     100,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   230,   231,   232,
       0,   233,   234,   235,   236,   237,   238,   239,   240,    27,
     103,    28,   104,    29,    30,    31,     0,   105,     0,     0,
       0,     0,     0,     0,   140,   384,   106,   107,   108,   109,
     110,   111,     0,     0,    93,     0,    94,    95,    96,    97,
     242,    98,    99,   100,    -7,   101,   102,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    93,     0,    94,    95,    96,
      97,     0,    98,    99,   100,    -7,   101,   102,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   104,     0,     0,     0,     0,
     105,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,   106,
     107,   108,   109,   110,   111,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,   103,     0,   104,     0,     0,     0,
       0,   105,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
     106,   107,   108,   109,   110,   111,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   274,    -7,    93,     2,    94,    95,    96,
      97,     0,    98,    99,   100,    -7,   101,   102,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,     0,     0,
      28,     0,     0,    30,   103,     0,   104,     0,     0,     0,
       0,   105,     0,    -7,   386,    -7,     0,    -7,     0,     0,
     106,   107,   108,   109,   110,   111,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   274,    -7,   228,     0,    94,    95,    96,
      97,     2,    98,    99,   100,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     526,     0,    94,    95,    96,    97,     0,    98,    99,   100,
       0,   101,   102,    27,   103,    28,   104,    29,    30,    31,
       0,   105,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,     0,     0,   154,     0,
      94,    95,    96,    97,   242,    98,    99,   100,    -7,   101,
     102,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   103,
       0,   104,     0,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,   103,     0,   104,
       0,    47,     0,  -109,   105,     0,    -7,     2,    -7,     0,
      -7,     0,     0,   106,   107,   108,   109,   110,   111,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,   274,    -7,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      47,    28,  -111,    29,     0,    31,     2,  -109,  -109,  -109,
       0,  -109,     0,     0,     0,     0,     0,  -109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -109,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    47,
      28,  -113,    29,     0,    31,     2,  -111,  -111,  -111,     0,
    -111,     0,     0,     0,     0,     0,  -111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -111,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    47,    28,
    -115,    29,     0,    31,     2,  -113,  -113,  -113,     0,  -113,
       0,     0,     0,     0,     0,  -113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -113,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    47,    28,  -117,
      29,     0,    31,     2,  -115,  -115,  -115,     0,  -115,     0,
       0,     0,     0,     0,  -115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -115,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    47,    28,  -119,    29,
       0,    31,     2,  -117,  -117,  -117,     0,  -117,     0,     0,
       0,     0,     0,  -117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -117,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   528,     0,    94,    95,    96,    97,     0,    98,    99,
     100,     0,   101,   102,    27,     0,    28,     0,    29,     0,
      31,     0,  -119,  -119,  -119,     0,  -119,     0,     0,     0,
       0,     0,  -119,   283,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -119,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,     1,     0,     0,     0,     0,     0,     2,     0,
     -51,   -51,   -51,     0,   -51,     0,     0,   -51,   -51,   -51,
     -51,   -51,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   274,   -51,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    47,    28,    48,    29,    30,    31,     2,     0,   154,
    -123,    94,    95,    96,    97,   140,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
      84,  -123,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   375,     0,   229,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,    27,
       0,    28,     0,    29,     0,    31,     0,    49,   103,     0,
     104,     0,     0,     0,     0,   105,     0,    50,     0,   276,
       0,   277,   155,   476,   106,   107,   108,   109,   110,   111,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,   231,   232,     0,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,   457,   104,   229,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   460,     0,   229,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     0,   230,   231,   232,     0,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,     0,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,   230,   231,   232,   242,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,   517,   104,   229,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,   229,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     0,   230,   231,   232,     0,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,     0,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,   230,   231,   232,   242,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,   559,   104,   229,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   563,     0,   229,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     0,   230,   231,   232,     0,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,     0,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,   230,   231,   232,   242,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,   604,   104,   229,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   611,     0,   229,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     0,   230,   231,   232,     0,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,     0,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,   230,   231,   232,   242,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,   615,   104,   229,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,   231,   232,     0,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   103,     0,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,   140,
       0,   106,   107,   108,   109,   110,   111,     0,     0,   154,
       0,    94,    95,    96,    97,   242,    98,    99,   100,    -7,
     101,   102,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,    93,   294,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,   103,     0,
     104,     0,     0,     0,     0,   105,     0,     0,     0,    -7,
     295,    -7,     0,     0,   106,   296,   108,   109,   110,   111,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,   319,    -7,
       0,    -7,     0,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
      93,     0,    94,    95,    96,    97,     0,    98,    99,   100,
      -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,   103,
       0,   104,     0,     0,     0,     0,   105,   418,    -7,     0,
      -7,     0,    -7,     0,     0,   106,   107,   108,   109,   110,
     111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,     0,
     103,     0,   104,     0,     0,     0,     0,   105,   428,    -7,
       0,    -7,     0,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
      93,     0,    94,    95,    96,    97,     0,    98,    99,   100,
      -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,     0,   437,     0,     0,     0,     0,   103,
       0,   104,     0,     0,     0,     0,   105,     0,    -7,     0,
      -7,   431,    -7,     0,     0,   106,   107,   108,   109,   110,
     111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,    -7,   438,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
     154,     0,    94,    95,    96,    97,     0,    98,    99,   100,
      -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,    93,   505,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,   103,
       0,   104,     0,     0,     0,     0,   105,     0,     0,     0,
      -7,    -7,    -7,     0,     0,   106,   107,   108,   109,   110,
     111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,     0,
       0,   103,     0,   104,     0,     0,     0,     0,   105,   519,
      -7,     0,    -7,     0,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    93,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,   522,    -7,
       0,    -7,     0,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
     537,     0,    -7,     0,    -7,     0,   538,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    93,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,   592,    -7,
       0,    -7,     0,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,   595,
      -7,     0,    -7,     0,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   154,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,   599,    -7,
       0,    -7,     0,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
       0,     0,    -7,   407,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    93,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,    -7,   412,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
       0,     0,    -7,   481,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   154,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,    -7,   483,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
       0,     0,    -7,   495,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    93,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,    -7,   543,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
       0,     0,    -7,   545,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,   154,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    93,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,    -7,   549,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
       0,     0,    -7,   554,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    93,     0,    94,    95,    96,    97,     0,    98,
      99,   100,    -7,   101,   102,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,    -7,   584,    -7,     0,     0,   106,   107,   108,   109,
     110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   274,
       0,   103,     0,   104,     0,     0,     0,     0,   105,     0,
       0,     0,    -7,   586,    -7,     0,     0,   106,   107,   108,
     109,   110,   111,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     274,    93,     0,    94,    95,    96,    97,     2,    98,    99,
     100,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   186,     0,    94,    95,
      96,    97,     2,    98,    99,   100,     0,   101,   102,     0,
     103,    28,   104,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   314,     0,    94,    95,    96,    97,     2,    98,    99,
     100,     0,   101,   102,     0,   103,    28,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   186,     0,   366,    95,
      96,    97,     2,    98,    99,   100,     0,   101,   102,     0,
     103,    28,   104,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,    28,   104,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   368,   108,   109,   110,   111,   168,     0,    94,
      95,    96,    97,     0,    98,    99,   100,     0,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     304,     0,    94,    95,    96,    97,     0,    98,    99,   100,
     169,   101,   102,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   305,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,   103,    78,   104,     0,
       0,     0,     0,   105,     0,     0,     0,     0,   170,     0,
       0,     0,   106,   171,   108,   109,   110,   111,     0,   103,
      78,   104,     0,     0,     0,     0,   105,     0,     0,     0,
       0,   306,     0,     0,     0,   106,   307,   108,   109,   110,
     111,   355,     0,    94,    95,    96,    97,     0,    98,    99,
     100,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,     0,    94,    95,    96,    97,
       0,    98,    99,   100,   356,   101,   102,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
     103,    78,   104,     0,     0,     0,     0,   105,     0,     0,
       0,     0,   357,     0,     0,     0,   106,   358,   108,   109,
     110,   111,     0,   103,    78,   104,     0,     0,     0,     0,
     105,     0,     0,     0,     0,   445,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   450,     0,    94,    95,    96,
      97,     0,    98,    99,   100,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   512,     0,
      94,    95,    96,    97,     0,    98,    99,   100,   451,   101,
     102,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   513,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,   103,    78,   104,     0,     0,     0,
       0,   105,     0,     0,     0,     0,   452,     0,     0,     0,
     106,   453,   108,   109,   110,   111,     0,   103,    78,   104,
       0,     0,     0,     0,   105,     0,     0,     0,     0,   514,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   299,
       0,    94,    95,    96,    97,     0,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   410,     0,    94,    95,    96,    97,     0,    98,    99,
     100,     0,   101,   102,     0,     0,     9,    10,    11,     0,
       0,     0,     0,   439,     0,    94,    95,    96,    97,     0,
      98,    99,   100,     0,   101,   102,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,   103,    78,
     104,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       9,    10,    11,     0,   106,   107,   108,   109,   110,   111,
     103,    78,   104,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   103,    78,   104,     0,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   498,     0,    94,    95,    96,    97,
       0,    98,    99,   100,     0,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   507,     0,    94,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     9,    10,    11,     0,     0,     0,     0,   552,     0,
      94,    95,    96,    97,     0,    98,    99,   100,     0,   101,
     102,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,   103,    78,   104,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     9,    10,    11,     0,   106,
     107,   108,   109,   110,   111,   103,    78,   104,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   103,    78,   104,
       0,     0,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   154,
       0,    94,    95,    96,    97,     0,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,    94,    95,    96,    97,     0,    98,    99,
     100,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,     0,    94,    95,    96,    97,     0,
      98,    99,   100,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,     0,
     104,     0,     0,     0,     0,   105,     0,     0,     0,   276,
       0,   277,   155,   579,   106,   107,   108,   109,   110,   111,
     103,     0,   104,     0,     0,     0,     0,   105,     0,     0,
       0,   276,     0,   277,   155,   581,   106,   107,   108,   109,
     110,   111,   103,     0,   104,     0,     0,     0,     0,   105,
       0,     0,     0,   276,     0,   277,   155,     0,   106,   107,
     108,   109,   110,   111,   490,     0,    94,    95,    96,    97,
       0,    98,    99,   100,     0,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,    94,    95,
      96,    97,     0,    98,    99,   100,     0,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   324,     0,
      94,    95,    96,    97,     0,    98,    99,   100,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   104,     0,     0,     0,     0,
     105,     0,     0,     0,   276,     0,   277,   155,     0,   106,
     107,   108,   109,   110,   111,   103,    93,   104,    94,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   155,
       0,   106,   107,   108,   109,   110,   111,   103,     0,   104,
       0,     0,     0,     0,   105,   325,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,    93,
       0,    94,    95,    96,    97,     0,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   569,   104,    94,    95,
      96,    97,   105,    98,    99,   100,     0,   101,   102,   423,
       0,   106,   107,   108,   109,   110,   111,     0,   573,     0,
      94,    95,    96,    97,     0,    98,    99,   100,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     0,   103,     0,
     104,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,   426,     0,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,     0,   105,   570,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   103,     0,   104,
       0,     0,     0,     0,   105,   574,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,    93,
       0,    94,    95,    96,    97,     0,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    94,    95,    96,    97,     0,    98,    99,
     100,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,    94,    95,    96,    97,     0,
      98,    99,   100,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   154,
     104,    94,    95,    96,    97,   105,    98,    99,   100,     0,
     101,   102,     0,     0,   106,   107,   108,   109,   110,   111,
     103,   328,   104,    94,    95,    96,    97,   179,    98,    99,
     100,     0,   101,   102,     0,     0,   106,   107,   108,   109,
     110,   111,   103,   413,   104,    94,    95,    96,    97,   181,
      98,    99,   100,     0,   101,   102,     0,     0,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,   103,   462,
     104,    94,    95,    96,    97,   105,    98,    99,   100,     0,
     101,   102,     0,     0,   106,   107,   108,   109,   110,   111,
     103,   465,   104,    94,    95,    96,    97,   105,    98,    99,
     100,     0,   101,   102,     0,     0,   106,   107,   108,   109,
     110,   111,   103,   500,   104,    94,    95,    96,    97,   105,
      98,    99,   100,     0,   101,   102,     0,     0,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,   103,   555,
     104,    94,    95,    96,    97,   105,    98,    99,   100,     0,
     101,   102,     0,     0,   106,   107,   108,   109,   110,   111,
     103,   566,   104,    94,    95,    96,    97,   105,    98,    99,
     100,     0,   101,   102,     0,     0,   106,   107,   108,   109,
     110,   111,   103,     0,   104,     0,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,   103,     0,
     104,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     103,     0,   104,    47,     0,  -119,     0,   105,     0,     2,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    47,
       0,  -119,     0,     0,     0,     2,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,  -119,
     285,  -119,     0,  -119,     0,     0,     0,     0,     0,  -119,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    47,     0,  -119,     0,     0,
       0,     2,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,   219,   434,  -119,     0,   220,
       0,     0,     0,     0,     0,  -119,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   351,     0,    48,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,  -119,   503,  -119,     0,  -119,     0,     0,     0,     0,
       0,  -119,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   351,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   286,   352,     0,
       0,   220,     0,     0,     0,     0,     0,    50,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     1,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,   219,   352,     0,     0,   220,     0,     0,
       0,     0,     0,    50,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   160,     0,
     161,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   447,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    75,     1,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,     0,
     448,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    47,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   401,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     2,     0,   485,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      60,    60,    62,    62,    60,    61,    85,    62,     3,   146,
      60,    61,    84,    71,    57,    33,   394,   377,     3,    50,
      66,    71,   176,   218,    77,   105,   221,   133,    79,    86,
      66,     3,     3,    93,    38,    39,    40,     3,    79,    79,
     100,   101,   102,    71,     1,    79,     3,    79,    77,   100,
      81,    77,    81,    21,    33,   105,    79,   163,   118,   100,
     100,    81,    85,    83,    77,    79,   100,    71,   100,    79,
      49,    85,    87,    84,   132,    85,   134,    92,    93,    99,
      79,     3,   132,    87,   134,    79,    85,   145,   146,    84,
       1,    85,     3,   288,   154,   145,   146,    93,   144,   179,
      85,   181,   133,     3,   140,     1,    77,     3,   144,   469,
     470,    77,   169,    85,   194,   175,   175,   145,   146,   256,
     175,    87,   118,   179,   142,   181,   186,    84,   184,   179,
      98,   181,   163,     3,   184,   215,     3,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   309,   351,   535,   154,    79,
     240,   539,    82,   220,    16,    17,    77,    99,   228,   148,
     230,   230,   168,   100,    77,   230,    87,    77,    81,    84,
      80,    77,    78,    79,   163,    81,    78,    87,   219,   100,
     186,    87,    77,    99,   423,    77,    81,   426,   256,   259,
     259,   197,   198,   199,   259,    77,   256,    77,   280,    86,
      77,    81,   248,    80,    88,    89,   276,   276,    14,    15,
      87,   276,   204,   205,   206,   207,    18,    19,   256,    50,
      78,    79,   228,   100,    78,    79,     0,    78,    79,    60,
      61,    96,    94,    95,   304,   288,    79,    80,    78,    79,
      71,    78,    79,    20,   314,   286,    78,    79,    97,   319,
      81,    78,   322,     1,   324,    86,    78,    79,   328,    78,
      34,    35,    78,    79,    78,    79,    40,    41,    42,    78,
      44,    78,    79,   362,   105,    78,    79,   367,    78,    79,
      78,    79,   372,   373,   374,   355,   200,   201,    79,   356,
     202,   203,    66,   299,    78,   365,   363,   286,   304,   208,
     209,   132,    82,   134,    79,   375,    82,   367,   314,    78,
       3,    85,   394,   319,   145,   146,   322,     3,   324,     6,
     390,   390,   328,    80,    80,   390,    77,   368,    77,    77,
      78,   377,    80,    81,    77,    77,   100,     3,   169,    87,
     410,   235,   173,   413,    11,    12,    13,   100,   179,   355,
     181,    80,     3,   184,     3,    82,   422,    78,    82,   365,
      82,    79,   422,   433,   433,    82,   140,    82,    78,   375,
     144,    78,    78,    82,    78,    78,    84,    78,   367,    84,
      82,    86,    80,    62,   451,    82,   100,   457,    82,   220,
     460,    82,   462,    82,    82,   465,   478,    82,    78,   388,
      84,    82,    77,    77,   410,    82,    82,   413,   100,    80,
      77,    80,    82,    85,    81,    60,    83,    82,    82,    82,
     490,    82,    82,    82,    82,   256,    82,    82,   498,    82,
     500,    60,   100,   439,   524,   525,   526,   527,   528,   529,
     533,   211,   512,   100,   450,   219,   100,   517,   210,   212,
     155,   457,   213,   535,   460,   214,   462,   539,    82,   465,
     156,   388,   145,   168,   169,    88,   291,   533,   173,   281,
     301,    44,    -1,   533,   248,   369,   248,   371,    -1,    -1,
     185,    -1,   552,    -1,   490,   555,    -1,    -1,   193,   559,
      -1,    -1,   498,   563,   500,    -1,   566,    -1,    -1,   569,
      -1,   507,    -1,   573,    -1,    -1,   512,    -1,    -1,    -1,
      -1,   517,   286,    -1,    -1,   220,    -1,   291,    -1,    -1,
     526,    -1,   528,    -1,    -1,   356,    -1,    -1,    -1,   360,
      -1,    -1,   363,    -1,   604,    -1,   367,   368,    -1,    -1,
      -1,   611,    -1,    -1,    -1,   615,   552,    -1,    -1,   555,
      -1,    -1,    -1,   559,    -1,    -1,    -1,   563,    -1,    -1,
     566,    -1,    -1,   569,    -1,   459,    -1,   573,    -1,    -1,
     275,    -1,    -1,    -1,    -1,   280,    -1,    -1,   283,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   362,   294,
      -1,   422,    -1,    -1,   299,    -1,   301,    -1,   604,    -1,
     305,    -1,    -1,   377,    -1,   611,    -1,    -1,    -1,   615,
     441,    -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,
     451,    -1,    -1,    -1,   455,   519,   520,   521,   522,   523,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,   356,    12,    13,    -1,   360,    -1,    -1,   363,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   570,    -1,   509,    -1,
     574,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,   588,   589,   590,    -1,    -1,    -1,
     594,   595,   533,   597,   598,   599,    -1,   601,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,   423,    -1,
       7,   426,    -1,    -1,    -1,   430,    86,    87,    88,    89,
      90,    91,   437,    -1,   439,    -1,   441,    -1,    -1,   444,
     100,    -1,    -1,    -1,    -1,   450,   451,    -1,    -1,    -1,
     455,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
     505,    -1,   507,    -1,   509,    -1,    -1,    -1,   513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   531,    -1,    -1,   534,
     535,    -1,    -1,     1,   539,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    -1,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,    83,    -1,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,   100,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,     1,    -1,     3,     4,     5,     6,
     100,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     1,     7,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      71,    -1,    -1,    74,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    79,    85,    81,    -1,    83,    -1,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,     1,    -1,
       3,     4,     5,     6,   100,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,     1,    -1,     3,    77,    -1,    79,     7,    81,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
       1,    71,     3,    73,    -1,    75,     7,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,     1,
      71,     3,    73,    -1,    75,     7,    77,    78,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,     1,    71,
       3,    73,    -1,    75,     7,    77,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,     1,    71,     3,
      73,    -1,    75,     7,    77,    78,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,     1,    71,     3,    73,
      -1,    75,     7,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    78,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    87,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      78,    79,    80,    -1,    82,    -1,    -1,    85,    86,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,     1,    71,     3,    73,    74,    75,     7,    -1,     1,
      79,     3,     4,     5,     6,    84,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,   100,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    87,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,   100,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,   100,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,   100,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,   100,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,     1,
      -1,     3,     4,     5,     6,   100,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,     1,    34,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,    -1,
      81,    -1,    83,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    82,    83,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,     1,    34,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      79,    -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      79,    -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      34,    12,    13,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    34,    12,    13,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    34,    12,
      13,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    86,    87,    88,    89,    90,    91,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    86,
      87,    88,    89,    90,    91,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    -1,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    -1,    83,    84,    -1,    86,
      87,    88,    89,    90,    91,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,     1,    72,     3,     4,
       5,     6,    77,     8,     9,    10,    -1,    12,    13,    84,
      -1,    86,    87,    88,    89,    90,    91,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,     1,
      72,     3,     4,     5,     6,    77,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,     1,    72,     3,     4,     5,     6,    77,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,     1,    72,     3,     4,     5,     6,    77,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    70,     1,
      72,     3,     4,     5,     6,    77,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,     1,    72,     3,     4,     5,     6,    77,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,     1,    72,     3,     4,     5,     6,    77,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    70,     1,
      72,     3,     4,     5,     6,    77,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,     1,    72,     3,     4,     5,     6,    77,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,     1,    -1,     3,    -1,    77,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     1,    -1,     3,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    77,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,     1,    -1,     3,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
       3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     7,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   129,   130,   133,   134,   135,   136,   142,   145,
     146,   147,   148,   165,   175,   176,   177,     1,     3,    77,
      87,   100,   130,   131,   132,   149,   150,   151,     3,    84,
      77,    77,    77,     1,   100,   131,   149,   130,   130,     1,
       3,    84,   130,   130,   130,     0,   176,   149,    71,   146,
     151,   152,    79,   100,    99,    77,    81,   150,    84,     3,
     104,   143,   144,     1,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    70,    72,    77,    86,    87,    88,    89,
      90,    91,   102,   103,   105,   106,   109,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   128,   134,   139,   146,   157,   157,   128,   100,   100,
      84,   129,   130,   168,   178,    84,   137,   138,   139,   165,
      78,   146,   151,   132,     1,    84,   111,   124,   125,   160,
       1,     3,    78,   130,   153,   154,   155,   156,     1,    34,
      82,    87,   125,   152,   143,    99,    79,    85,   113,    77,
     111,    77,   111,   111,    77,    77,     1,   125,   127,   157,
      11,    12,    13,    77,    81,    83,   113,    87,    92,    93,
      88,    89,    14,    15,    16,    17,    94,    95,    18,    19,
      86,    96,    97,    20,    21,    98,    78,   139,     1,    77,
      81,   151,   158,   159,   139,    78,    78,    79,     1,     3,
      57,    58,    59,    61,    62,    63,    64,    65,    66,    67,
      68,    85,   100,   127,   129,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   129,   168,   137,    85,   138,    80,
     100,   140,   141,   149,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    99,   126,    81,    83,   160,   161,
     162,   163,   164,     1,   126,    78,    77,   149,   151,   158,
      78,    79,    78,    79,    34,    82,    87,   113,   125,     1,
     125,   152,    82,    82,     1,    34,    82,    87,   125,    79,
      85,   128,    85,   144,     1,   157,   157,   157,   125,    78,
      78,    79,    78,     3,     1,    78,   110,   125,     1,   127,
       3,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   116,   117,   117,   118,   119,   120,   121,   122,   127,
     159,     1,    78,   153,   158,     1,    34,    82,    87,   125,
     152,   159,    77,    81,     6,     1,     3,    77,    87,    80,
     128,    80,    77,    77,    77,     1,   166,    77,     3,   100,
     100,   100,   127,   100,    85,   170,    85,   128,    79,   100,
      80,   125,   128,     3,    79,    85,   160,    99,   164,   125,
     125,    56,   155,     3,   125,    82,    82,    82,   125,    82,
       1,   125,    82,     1,   125,    82,    82,    85,    78,    78,
      78,    78,    79,    84,   113,   125,    84,   113,    78,    78,
      79,    82,    82,    80,    78,    78,    78,    34,    82,     1,
     125,   152,    82,    82,    34,    82,   125,     1,    78,   153,
       1,    34,    82,    87,   125,   152,    78,     1,   166,    80,
       1,   166,     1,   127,   127,     1,   127,    62,    62,   129,
     171,   100,   100,   141,   128,    82,    85,   160,   162,    82,
      82,    82,    82,    82,    82,    58,   107,   108,   157,   161,
       1,   161,   125,   124,   125,    82,   125,    82,     1,   125,
       1,   125,    82,    78,    78,    34,   125,     1,   125,   152,
      82,    82,     1,    34,    82,   125,   100,     1,   166,    78,
      78,    78,    78,    78,    77,    77,     1,   171,     1,   171,
     160,    80,    78,    79,    80,    79,    85,    79,    85,    79,
      85,    82,    82,    82,    82,    82,    82,   125,    82,    82,
     125,    82,     1,   125,    82,     1,   125,    82,   166,     1,
     166,   166,   166,     1,   166,   127,     1,   127,   127,     1,
      78,   127,   127,     1,    78,   127,   125,   108,   125,    85,
      85,    85,    82,    82,    82,    82,    82,    82,    60,    60,
      60,    78,    78,    78,    78,    78,   166,    78,    78,    78,
     166,    78,   166,   166,     1,   166,   100,   100,   100,   166,
     166,     1,   166,   166,   166,     1,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   113,   113,   113,   114,   114,   114,   114,   115,   115,
     115,   116,   116,   116,   117,   117,   117,   117,   117,   118,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   160,   160,   160,
     161,   161,   161,   161,   162,   163,   163,   164,   164,   165,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   172,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   174,   174,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     4,
       4,     6,     6,     7,     7,     1,     3,     1,     2,     2,
       2,     2,     4,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     3,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     2,     2,
       1,     1,     1,     2,     2,     3,     1,     2,     1,     2,
       1,     1,     3,     2,     3,     1,     4,     5,     5,     6,
       2,     1,     3,     3,     1,     4,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       6,     6,     5,     5,     6,     6,     5,     5,     4,     4,
       3,     2,     2,     1,     1,     2,     3,     1,     1,     3,
       2,     2,     1,     1,     3,     2,     1,     2,     1,     1,
       2,     3,     2,     3,     5,     4,     5,     4,     3,     3,
       3,     4,     6,     5,     5,     6,     4,     4,     2,     3,
       3,     4,     5,     5,     4,     5,     5,     3,     3,     6,
       6,     5,     5,     5,     6,     6,     4,     3,     4,     1,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     7,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       5,     7,     5,     7,     7,     7,     5,     5,     5,     7,
       6,     7,     6,     7,     5,     5,     7,     7,     7,     7,
       7,     7,     7,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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

  return yystpcpy (yyres, yystr) - yyres;
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
#line 52 "parser2.y" /* yacc.c:1646  */
    {pusht((yyvsp[0].sval));}
#line 3148 "parser2.tab.c" /* yacc.c:1646  */
    break;


#line 3152 "parser2.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
#line 630 "parser2.y" /* yacc.c:1906  */


extern int column, line, total_includes;
extern char* curfilename;
extern char* actual_token;
char* filename;



struct Node
{
    char tag[5]; 
    char data[100];
    struct Node *next;
    struct Node *previous;
}*head, *tail; 


void pusht(char *value)
{
     struct Node *var,*temp;
     var=(struct Node *)malloc(sizeof(struct Node));
             strncpy(var->tag, "type", sizeof ("type")+1);
             strncpy(var->data, value, sizeof (value));
     if(head==NULL)
     {
          head=var;
          head->previous=NULL;
          head->next=NULL;
          tail=head;
     }
     else
     {
         tail=head;
         while(tail!=NULL)
         {
             temp=tail;
             tail=tail->next;
         }
     tail=var;
     temp->next=tail;
     tail->previous=temp;
     tail->next=NULL;
     }
} 
  
int pop()
{
      struct Node *temp;
      temp=tail;
      if(temp->previous==NULL)
      {
           free(temp);
           head=NULL;
           tail=NULL;
           return 0;
      }
      printf("\nSe borro el siguiente dato: %s \n",tail->data);
      tail=temp->previous;
      tail->next=NULL;
      free(temp);
      return 0;
} 

void imprimir()
{
     struct Node *temp;
     temp=head;
     if(temp==NULL)
      {
         printf("List is Empty");
      }
     while(temp!=NULL)
     {

        printf("%s | %s -> ",temp->tag,temp->data);
        temp=temp->next;
     }
}


int main(int argc, char**argv){
	
	filename = argv[1];
	yyin = fopen(filename,"r");
	
	do{
		yyparse();
	}while(!feof(yyin));

    imprimir();
}

void yyerror(const char *s)
{			
	fflush(stdout);
	char *error = strdup(s);
	int count_words = 1;

	FILE *f;
	char str[1024];
	int actual_column = column - strlen(actual_token);
	if(total_includes == 1){
		f = fopen(filename, "r");
		printf("\n%s:%d:%d:",filename,line,actual_column);
	}
	else{
		f = fopen(curfilename, "r");
		printf("%s:%d:%d:",curfilename,line,actual_column);
	}
	
	
	error = strtok(error, " ");
	while (error != NULL){
		if( count_words <= 2){
			printf("%s%s ",KRED, error);
		}
		else{
			if(!strcmp(error, "IDENTIFIER") || !strcmp(error, "I_CONSTANT") || !strcmp(error, "F_CONSTANT"))
				printf("the %s%s '%s' ", KNRM, error, actual_token);
			else if(!strcmp(error, "IDENTIFIER,") || !strcmp(error, "I_CONSTANT,") || !strcmp(error, "F_CONSTANT,")){
				char type_token[20];
				strcpy(type_token, error);
				type_token[(int)strlen(type_token)-1] = '\0';
				printf("the %s%s '%s', ", KNRM, type_token, actual_token);
			}
			else
				printf("%s%s ",KNRM, error);
		}
		error = strtok(NULL, " ");
		count_words++;
	}
	
	int n_line = 1;
	while(n_line <= line){
		fgets(str, 1024, f);
		n_line += 1;
	}	
	
	printf("\n%s", str);
	
	int n_column = 1;
	while(n_column < column-strlen(actual_token)){
		printf(" ");
		n_column += 1;
	}
	
	printf("^");	
	fclose(f);
	printf("\n");
}


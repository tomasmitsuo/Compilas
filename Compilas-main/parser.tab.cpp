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




/* First part of user prologue.  */
#line 7 "parser.ypp"
 // ALUNO: TOMÁS MITSUO DIAS UEDA - 00344595
#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>

#include "symbols.hpp"
#include "ast.hpp"
#include "semantic.hpp"
#include "tac.hpp"

using namespace std;

extern int lineNumber;
extern const char* outputFile;

bool hasSyntaxError = false;
int syntaxErrorCount = 0;
AST* programAST = nullptr;

int yylex();
void yyerror(string msg);
int getLineNumber();


#line 98 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_KW_BYTE = 3,                    /* KW_BYTE  */
  YYSYMBOL_KW_INT = 4,                     /* KW_INT  */
  YYSYMBOL_KW_REAL = 5,                    /* KW_REAL  */
  YYSYMBOL_KW_IF = 6,                      /* KW_IF  */
  YYSYMBOL_KW_ELSE = 7,                    /* KW_ELSE  */
  YYSYMBOL_KW_DO = 8,                      /* KW_DO  */
  YYSYMBOL_KW_WHILE = 9,                   /* KW_WHILE  */
  YYSYMBOL_KW_READ = 10,                   /* KW_READ  */
  YYSYMBOL_KW_PRINT = 11,                  /* KW_PRINT  */
  YYSYMBOL_KW_RETURN = 12,                 /* KW_RETURN  */
  YYSYMBOL_OPERATOR_LE = 13,               /* OPERATOR_LE  */
  YYSYMBOL_OPERATOR_GE = 14,               /* OPERATOR_GE  */
  YYSYMBOL_OPERATOR_EQ = 15,               /* OPERATOR_EQ  */
  YYSYMBOL_OPERATOR_DIF = 16,              /* OPERATOR_DIF  */
  YYSYMBOL_TK_IDENTIFIER = 17,             /* TK_IDENTIFIER  */
  YYSYMBOL_LIT_INT = 18,                   /* LIT_INT  */
  YYSYMBOL_LIT_CHAR = 19,                  /* LIT_CHAR  */
  YYSYMBOL_LIT_REAL = 20,                  /* LIT_REAL  */
  YYSYMBOL_LIT_STRING = 21,                /* LIT_STRING  */
  YYSYMBOL_TOKEN_ERROR = 22,               /* TOKEN_ERROR  */
  YYSYMBOL_LOWER_THAN_ELSE = 23,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '&'  */
  YYSYMBOL_29_ = 29,                       /* '|'  */
  YYSYMBOL_30_ = 30,                       /* '~'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '<'  */
  YYSYMBOL_34_ = 34,                       /* '>'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_ldecl = 44,                     /* ldecl  */
  YYSYMBOL_dec = 45,                       /* dec  */
  YYSYMBOL_vardec = 46,                    /* vardec  */
  YYSYMBOL_expr_vet_elem_list = 47,        /* expr_vet_elem_list  */
  YYSYMBOL_expr_vet_elem = 48,             /* expr_vet_elem  */
  YYSYMBOL_expr_vet_real_list = 49,        /* expr_vet_real_list  */
  YYSYMBOL_vetdec = 50,                    /* vetdec  */
  YYSYMBOL_parlist = 51,                   /* parlist  */
  YYSYMBOL_parlist_nvazio = 52,            /* parlist_nvazio  */
  YYSYMBOL_par_elem = 53,                  /* par_elem  */
  YYSYMBOL_fundec = 54,                    /* fundec  */
  YYSYMBOL_cmd_blc = 55,                   /* cmd_blc  */
  YYSYMBOL_cmd_lst = 56,                   /* cmd_lst  */
  YYSYMBOL_print_lst = 57,                 /* print_lst  */
  YYSYMBOL_print_elem = 58,                /* print_elem  */
  YYSYMBOL_cmd = 59,                       /* cmd  */
  YYSYMBOL_par = 60,                       /* par  */
  YYSYMBOL_par_nvazio = 61,                /* par_nvazio  */
  YYSYMBOL_func = 62,                      /* func  */
  YYSYMBOL_expr = 63                       /* expr  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


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
       2,     2,     2,     2,     2,     2,     2,     2,    28,     2,
      31,    32,    26,    24,    38,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      33,    37,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,    29,    35,    30,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    99,    99,   102,   103,   104,   105,   106,   109,   110,
     111,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     133,   134,   137,   138,   140,   141,   144,   145,   146,   147,
     148,   149,   156,   157,   160,   161,   164,   165,   166,   169,
     170,   171,   174,   175,   178,   179,   186,   187,   190,   191,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   214,   215,   218,   219,   224,   226,   227,   228,
     229,   230,   231,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246
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
  "\"end of file\"", "error", "\"invalid token\"", "KW_BYTE", "KW_INT",
  "KW_REAL", "KW_IF", "KW_ELSE", "KW_DO", "KW_WHILE", "KW_READ",
  "KW_PRINT", "KW_RETURN", "OPERATOR_LE", "OPERATOR_GE", "OPERATOR_EQ",
  "OPERATOR_DIF", "TK_IDENTIFIER", "LIT_INT", "LIT_CHAR", "LIT_REAL",
  "LIT_STRING", "TOKEN_ERROR", "LOWER_THAN_ELSE", "'+'", "'-'", "'*'",
  "'/'", "'&'", "'|'", "'~'", "'('", "')'", "'<'", "'>'", "'}'", "';'",
  "'='", "','", "'['", "']'", "'{'", "$accept", "program", "ldecl", "dec",
  "vardec", "expr_vet_elem_list", "expr_vet_elem", "expr_vet_real_list",
  "vetdec", "parlist", "parlist_nvazio", "par_elem", "fundec", "cmd_blc",
  "cmd_lst", "print_lst", "print_elem", "cmd", "par", "par_nvazio", "func",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     113,    51,    -2,     6,     9,    62,  -114,   113,  -114,  -114,
    -114,  -114,  -114,  -114,   -12,    -9,    45,  -114,  -114,   103,
     127,   277,   103,   137,   277,   103,   150,   277,    43,    68,
      71,    72,  -114,    59,    79,    86,    91,   -23,  -114,  -114,
    -114,   277,   277,  -114,    65,   101,   112,   141,   143,   110,
     117,   144,   145,   146,   138,  -114,  -114,  -114,   142,   103,
    -114,  -114,  -114,   277,   277,    96,   348,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   -32,
     142,  -114,  -114,  -114,    37,   142,  -114,  -114,  -114,    83,
       1,  -114,  -114,   126,  -114,   226,   160,  -114,   210,   210,
     210,   210,   414,   414,   421,   421,    96,    96,   210,   210,
    -114,   122,  -114,  -114,   122,  -114,  -114,   170,   125,   161,
      23,   277,   174,   253,   277,    26,  -114,  -114,   164,    60,
    -114,   277,  -114,  -114,  -114,   165,   166,   167,   175,   169,
    -114,  -114,   277,   178,   193,   204,   185,  -114,   191,   253,
     392,   252,   277,   277,  -114,  -114,  -114,  -114,   122,  -114,
     170,  -114,   370,   277,    23,  -114,  -114,  -114,  -114,   276,
     182,  -114,  -114,    23,   300,  -114,  -114,   197,   228,  -114,
     277,    23,   324,  -114,  -114
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     0,     8,     9,
      10,     6,     5,     7,     0,     0,     0,     1,     3,    32,
       0,     0,    32,     0,     0,    32,     0,     0,     0,     0,
       0,     0,    33,    34,     0,     0,     0,    69,    70,    71,
      72,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    36,    38,     0,     0,
      15,    14,    16,    63,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    11,    13,     0,     0,    17,    18,    19,     0,
       0,    40,    35,     0,    62,    64,     0,    86,    85,    84,
      82,    83,    73,    74,    75,    76,    77,    78,    79,    80,
      29,     0,    39,    27,     0,    41,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    59,     0,     0,
      66,     0,    68,    23,    22,     0,    20,     0,    24,     0,
      43,    61,     0,     0,     0,     0,     0,    48,     0,    46,
      49,     0,     0,     0,    42,    45,    65,    28,     0,    26,
       0,    30,     0,     0,     0,    54,    52,    47,    53,     0,
       0,    21,    25,     0,     0,    57,    50,     0,    55,    58,
       0,     0,     0,    56,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,   229,  -114,  -114,  -113,  -114,    85,  -114,    16,
     187,  -114,  -114,   -41,   118,    99,  -114,  -106,  -114,   130,
    -114,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,   135,   136,   139,     9,    31,
      32,    33,    10,   127,   128,   148,   149,   129,    93,    94,
      43,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   137,   118,    49,   110,   111,    54,   119,    63,   120,
     121,   122,   123,   124,   144,    14,    64,    91,   125,    19,
      65,    66,    22,    15,   143,    20,    16,    21,    23,   119,
      24,   120,   121,   122,   123,   124,   -44,   126,    45,   112,
     125,    50,    90,    96,   115,   171,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   175,   126,
      55,   143,    17,   152,    90,   153,   119,   178,   120,   121,
     122,   123,   124,   113,   114,   183,    25,   125,    67,    68,
      69,    70,    26,    11,    27,    56,    12,    13,    57,    71,
      72,    73,    74,    75,    76,   -44,   126,    59,    77,    78,
     145,    90,   150,   151,    58,    79,    28,    29,    30,    67,
      68,    69,    70,    -4,     1,    60,     2,     3,     4,   116,
     117,   162,    61,    67,    68,    69,    70,    62,   150,    77,
      78,   169,   170,    80,    71,    72,    73,    74,    75,    76,
     133,   134,   174,    77,    78,    34,    35,    36,    81,    85,
      84,    67,    68,    69,    70,    46,    47,    48,   130,   182,
     140,   141,    71,    72,    73,    74,    75,    76,    51,    52,
      53,    77,    78,    67,    68,    69,    70,    82,    89,    83,
      86,    87,    88,    90,    71,    72,    73,    74,    75,    76,
     138,   146,   142,    77,    78,    67,    68,    69,    70,   154,
     132,   157,   163,   159,   158,   161,    71,    72,    73,    74,
      75,    76,   164,   160,   141,    77,    78,    67,    68,    69,
      70,   165,   177,   -45,   -45,   -45,   -45,   166,    71,    72,
      73,    74,    75,    76,   180,   181,    18,    77,    78,    67,
      68,    69,    70,   -45,   -45,   172,    92,   155,   167,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,    77,
      78,   156,     0,     0,   131,    67,    68,    69,    70,     0,
      37,    38,    39,    40,   147,     0,    71,    72,    73,    74,
      75,    76,     0,    41,    42,    77,    78,     0,   168,    67,
      68,    69,    70,     0,    37,    38,    39,    40,     0,     0,
      71,    72,    73,    74,    75,    76,     0,    41,    42,    77,
      78,     0,   176,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,    77,    78,     0,   179,    67,    68,    69,
      70,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,     0,     0,     0,    77,    78,     0,
     184,    67,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,     0,     0,
      97,    77,    78,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,   173,    77,    78,    67,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,    78,    67,    68,    69,
      70,     0,     0,     0,    67,    68,    69,    70,     0,     0,
      73,    74,    75,    76,     0,     0,     0,    77,    78,    75,
      76,     0,     0,     0,    77,    78
};

static const yytype_int16 yycheck[] =
{
      21,   114,     1,    24,    36,    37,    27,     6,    31,     8,
       9,    10,    11,    12,   120,    17,    39,    58,    17,    31,
      41,    42,    31,    17,     1,    37,    17,    39,    37,     6,
      39,     8,     9,    10,    11,    12,    35,    36,    22,    80,
      17,    25,    41,    64,    85,   158,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,   164,    36,
      17,     1,     0,    37,    41,    39,     6,   173,     8,     9,
      10,    11,    12,    36,    37,   181,    31,    17,    13,    14,
      15,    16,    37,    32,    39,    17,    35,    36,    17,    24,
      25,    26,    27,    28,    29,    35,    36,    38,    33,    34,
     121,    41,   123,   124,    32,    40,     3,     4,     5,    13,
      14,    15,    16,     0,     1,    36,     3,     4,     5,    36,
      37,   142,    36,    13,    14,    15,    16,    36,   149,    33,
      34,   152,   153,    32,    24,    25,    26,    27,    28,    29,
      18,    19,   163,    33,    34,    18,    19,    20,    36,    32,
      40,    13,    14,    15,    16,    18,    19,    20,    32,   180,
      35,    36,    24,    25,    26,    27,    28,    29,    18,    19,
      20,    33,    34,    13,    14,    15,    16,    36,    40,    36,
      36,    36,    36,    41,    24,    25,    26,    27,    28,    29,
      20,    17,    31,    33,    34,    13,    14,    15,    16,    35,
      40,    36,     9,    36,    38,    36,    24,    25,    26,    27,
      28,    29,     8,    38,    36,    33,    34,    13,    14,    15,
      16,    36,    40,    13,    14,    15,    16,    36,    24,    25,
      26,    27,    28,    29,    37,     7,     7,    33,    34,    13,
      14,    15,    16,    33,    34,   160,    59,   129,   149,    -1,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      34,   131,    -1,    -1,    38,    13,    14,    15,    16,    -1,
      17,    18,    19,    20,    21,    -1,    24,    25,    26,    27,
      28,    29,    -1,    30,    31,    33,    34,    -1,    36,    13,
      14,    15,    16,    -1,    17,    18,    19,    20,    -1,    -1,
      24,    25,    26,    27,    28,    29,    -1,    30,    31,    33,
      34,    -1,    36,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    36,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      36,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    33,    34,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    34,    13,    14,    15,
      16,    -1,    -1,    -1,    13,    14,    15,    16,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    28,
      29,    -1,    -1,    -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,    43,    44,    45,    46,    50,
      54,    32,    35,    36,    17,    17,    17,     0,    44,    31,
      37,    39,    31,    37,    39,    31,    37,    39,     3,     4,
       5,    51,    52,    53,    18,    19,    20,    17,    18,    19,
      20,    30,    31,    62,    63,    51,    18,    19,    20,    63,
      51,    18,    19,    20,    63,    17,    17,    17,    32,    38,
      36,    36,    36,    31,    39,    63,    63,    13,    14,    15,
      16,    24,    25,    26,    27,    28,    29,    33,    34,    40,
      32,    36,    36,    36,    40,    32,    36,    36,    36,    40,
      41,    55,    52,    60,    61,    63,    63,    32,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      36,    37,    55,    36,    37,    55,    36,    37,     1,     6,
       8,     9,    10,    11,    12,    17,    36,    55,    56,    59,
      32,    38,    40,    18,    19,    47,    48,    47,    20,    49,
      35,    36,    31,     1,    59,    63,    17,    21,    57,    58,
      63,    63,    37,    39,    35,    56,    61,    36,    38,    36,
      38,    36,    63,     9,     8,    36,    36,    57,    36,    63,
      63,    47,    49,    32,    63,    59,    36,    40,    59,    36,
      37,     7,    63,    59,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    44,    45,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    54,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     2,     2,     1,     1,
       1,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       1,     3,     1,     1,     1,     3,     8,     6,     8,     6,
       8,     6,     0,     1,     1,     3,     2,     2,     2,     6,
       6,     6,     3,     3,     0,     2,     1,     2,     1,     1,
       4,     7,     3,     3,     3,     5,     7,     4,     5,     1,
       1,     2,     1,     0,     1,     3,     4,     1,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3
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
  case 2: /* program: ldecl  */
#line 99 "parser.ypp"
                        { (yyval.ast) = (yyvsp[0].ast); programAST = (yyval.ast); }
#line 1317 "parser.tab.cpp"
    break;

  case 3: /* ldecl: dec ldecl  */
#line 102 "parser.ypp"
                        { vector<AST*> children = {(yyvsp[-1].ast),(yyvsp[0].ast)}; (yyval.ast) = new AST(AST_LDECL, children); }
#line 1323 "parser.tab.cpp"
    break;

  case 4: /* ldecl: %empty  */
#line 103 "parser.ypp"
                        { (yyval.ast) = nullptr; }
#line 1329 "parser.tab.cpp"
    break;

  case 5: /* ldecl: error '}'  */
#line 104 "parser.ypp"
                 { yyerror("Declaração inválida. Recuperado até }"); yyerrok; yyclearin; (yyval.ast) = nullptr; }
#line 1335 "parser.tab.cpp"
    break;

  case 6: /* ldecl: error ')'  */
#line 105 "parser.ypp"
                 { yyerror("Declaração inválida. Recuperado até )"); yyerrok; yyclearin; (yyval.ast) = nullptr; }
#line 1341 "parser.tab.cpp"
    break;

  case 7: /* ldecl: error ';'  */
#line 106 "parser.ypp"
                 { yyerror("Declaração inválida. Recuperado até ;"); yyerrok; yyclearin; (yyval.ast) = nullptr; }
#line 1347 "parser.tab.cpp"
    break;

  case 8: /* dec: vardec  */
#line 109 "parser.ypp"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 1353 "parser.tab.cpp"
    break;

  case 9: /* dec: vetdec  */
#line 110 "parser.ypp"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 1359 "parser.tab.cpp"
    break;

  case 10: /* dec: fundec  */
#line 111 "parser.ypp"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 1365 "parser.tab.cpp"
    break;

  case 11: /* vardec: KW_INT TK_IDENTIFIER '=' LIT_CHAR ';'  */
#line 118 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_INT_VARDEC, children, (yyvsp[-3].symbol));}
#line 1371 "parser.tab.cpp"
    break;

  case 12: /* vardec: KW_INT TK_IDENTIFIER '=' LIT_INT ';'  */
#line 119 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_INT_VARDEC, children, (yyvsp[-3].symbol));}
#line 1377 "parser.tab.cpp"
    break;

  case 13: /* vardec: KW_INT TK_IDENTIFIER '=' LIT_REAL ';'  */
#line 120 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_INT_VARDEC, children, (yyvsp[-3].symbol));}
#line 1383 "parser.tab.cpp"
    break;

  case 14: /* vardec: KW_BYTE TK_IDENTIFIER '=' LIT_CHAR ';'  */
#line 121 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_BYTE_VARDEC, children, (yyvsp[-3].symbol));}
#line 1389 "parser.tab.cpp"
    break;

  case 15: /* vardec: KW_BYTE TK_IDENTIFIER '=' LIT_INT ';'  */
#line 122 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_BYTE_VARDEC, children, (yyvsp[-3].symbol));}
#line 1395 "parser.tab.cpp"
    break;

  case 16: /* vardec: KW_BYTE TK_IDENTIFIER '=' LIT_REAL ';'  */
#line 123 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_BYTE_VARDEC, children, (yyvsp[-3].symbol));}
#line 1401 "parser.tab.cpp"
    break;

  case 17: /* vardec: KW_REAL TK_IDENTIFIER '=' LIT_INT ';'  */
#line 124 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_REAL_VARDEC, children, (yyvsp[-3].symbol));}
#line 1407 "parser.tab.cpp"
    break;

  case 18: /* vardec: KW_REAL TK_IDENTIFIER '=' LIT_CHAR ';'  */
#line 125 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_REAL_VARDEC, children, (yyvsp[-3].symbol));}
#line 1413 "parser.tab.cpp"
    break;

  case 19: /* vardec: KW_REAL TK_IDENTIFIER '=' LIT_REAL ';'  */
#line 126 "parser.ypp"
                                                { vector<AST*> children = {new AST(AST_SYMBOL, {}, (yyvsp[-1].symbol))}; (yyval.ast) = new AST(AST_REAL_VARDEC, children, (yyvsp[-3].symbol));}
#line 1419 "parser.tab.cpp"
    break;

  case 20: /* expr_vet_elem_list: expr_vet_elem  */
#line 133 "parser.ypp"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 1425 "parser.tab.cpp"
    break;

  case 21: /* expr_vet_elem_list: expr_vet_elem ',' expr_vet_elem_list  */
#line 134 "parser.ypp"
                                                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_EXPR_VET_ELEM, children); }
#line 1431 "parser.tab.cpp"
    break;

  case 22: /* expr_vet_elem: LIT_CHAR  */
#line 137 "parser.ypp"
                                                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1437 "parser.tab.cpp"
    break;

  case 23: /* expr_vet_elem: LIT_INT  */
#line 138 "parser.ypp"
                                                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1443 "parser.tab.cpp"
    break;

  case 24: /* expr_vet_real_list: LIT_REAL  */
#line 140 "parser.ypp"
                                                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1449 "parser.tab.cpp"
    break;

  case 25: /* expr_vet_real_list: LIT_REAL ',' expr_vet_real_list  */
#line 141 "parser.ypp"
                                                                { vector<AST*> children = {(yyvsp[0].ast)}; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[-2].symbol)); }
#line 1455 "parser.tab.cpp"
    break;

  case 26: /* vetdec: KW_INT TK_IDENTIFIER '[' expr ']' '=' expr_vet_elem_list ';'  */
#line 144 "parser.ypp"
                                                                        { vector<AST*> children = {(yyvsp[-4].ast), (yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_INT_VETDEC, children, (yyvsp[-6].symbol));}
#line 1461 "parser.tab.cpp"
    break;

  case 27: /* vetdec: KW_INT TK_IDENTIFIER '[' expr ']' ';'  */
#line 145 "parser.ypp"
                                                                        { vector<AST*> children = {(yyvsp[-2].ast)}; (yyval.ast) = new AST(AST_INT_VETDEC_VAZIO, children, (yyvsp[-4].symbol));}
#line 1467 "parser.tab.cpp"
    break;

  case 28: /* vetdec: KW_BYTE TK_IDENTIFIER '[' expr ']' '=' expr_vet_elem_list ';'  */
#line 146 "parser.ypp"
                                                                        { vector<AST*> children = {(yyvsp[-4].ast), (yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_BYTE_VETDEC, children, (yyvsp[-6].symbol));}
#line 1473 "parser.tab.cpp"
    break;

  case 29: /* vetdec: KW_BYTE TK_IDENTIFIER '[' expr ']' ';'  */
#line 147 "parser.ypp"
                                                                        { vector<AST*> children = {(yyvsp[-2].ast)}; (yyval.ast) = new AST(AST_BYTE_VETDEC_VAZIO, children, (yyvsp[-4].symbol));}
#line 1479 "parser.tab.cpp"
    break;

  case 30: /* vetdec: KW_REAL TK_IDENTIFIER '[' expr ']' '=' expr_vet_real_list ';'  */
#line 148 "parser.ypp"
                                                                        { vector<AST*> children = {(yyvsp[-4].ast), (yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_REAL_VETDEC, children, (yyvsp[-6].symbol));}
#line 1485 "parser.tab.cpp"
    break;

  case 31: /* vetdec: KW_REAL TK_IDENTIFIER '[' expr ']' ';'  */
#line 149 "parser.ypp"
                                                                        { vector<AST*> children = {(yyvsp[-2].ast)}; (yyval.ast) = new AST(AST_REAL_VETDEC_VAZIO, children, (yyvsp[-4].symbol));}
#line 1491 "parser.tab.cpp"
    break;

  case 32: /* parlist: %empty  */
#line 156 "parser.ypp"
                                        {(yyval.ast) = nullptr;}
#line 1497 "parser.tab.cpp"
    break;

  case 33: /* parlist: parlist_nvazio  */
#line 157 "parser.ypp"
                                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1503 "parser.tab.cpp"
    break;

  case 34: /* parlist_nvazio: par_elem  */
#line 160 "parser.ypp"
                                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1509 "parser.tab.cpp"
    break;

  case 35: /* parlist_nvazio: par_elem ',' parlist_nvazio  */
#line 161 "parser.ypp"
                                        {vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_PAR_LIST, children);}
#line 1515 "parser.tab.cpp"
    break;

  case 36: /* par_elem: KW_INT TK_IDENTIFIER  */
#line 164 "parser.ypp"
                                           {vector<AST*> children; (yyval.ast) = new AST(AST_PAR_INT_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1521 "parser.tab.cpp"
    break;

  case 37: /* par_elem: KW_BYTE TK_IDENTIFIER  */
#line 165 "parser.ypp"
                                           {vector<AST*> children; (yyval.ast) = new AST(AST_PAR_BYTE_SYMBOL, children, (yyvsp[0].symbol));}
#line 1527 "parser.tab.cpp"
    break;

  case 38: /* par_elem: KW_REAL TK_IDENTIFIER  */
#line 166 "parser.ypp"
                                           {vector<AST*> children; (yyval.ast) = new AST(AST_PAR_REAL_SYMBOL, children, (yyvsp[0].symbol));}
#line 1533 "parser.tab.cpp"
    break;

  case 39: /* fundec: KW_INT TK_IDENTIFIER '(' parlist ')' cmd_blc  */
#line 169 "parser.ypp"
                                                    { vector<AST*> children = {(yyvsp[-2].ast),(yyvsp[0].ast)}; (yyval.ast) = new AST(AST_INT_FUNDEC, children, (yyvsp[-4].symbol));}
#line 1539 "parser.tab.cpp"
    break;

  case 40: /* fundec: KW_BYTE TK_IDENTIFIER '(' parlist ')' cmd_blc  */
#line 170 "parser.ypp"
                                                    { vector<AST*> children = {(yyvsp[-2].ast),(yyvsp[0].ast)}; (yyval.ast) = new AST(AST_BYTE_FUNDEC, children, (yyvsp[-4].symbol));}
#line 1545 "parser.tab.cpp"
    break;

  case 41: /* fundec: KW_REAL TK_IDENTIFIER '(' parlist ')' cmd_blc  */
#line 171 "parser.ypp"
                                                    { vector<AST*> children = {(yyvsp[-2].ast),(yyvsp[0].ast)}; (yyval.ast) = new AST(AST_REAL_FUNDEC, children, (yyvsp[-4].symbol));}
#line 1551 "parser.tab.cpp"
    break;

  case 42: /* cmd_blc: '{' cmd_lst '}'  */
#line 174 "parser.ypp"
                       { vector<AST*> children = {(yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_CMD_BLOCK, children); }
#line 1557 "parser.tab.cpp"
    break;

  case 43: /* cmd_blc: '{' error '}'  */
#line 175 "parser.ypp"
                       { yyerror("Bloco de comandos inválido. Recuperado até a chave de fechamento."); yyerrok; yyclearin; (yyval.ast) = nullptr; }
#line 1563 "parser.tab.cpp"
    break;

  case 44: /* cmd_lst: %empty  */
#line 178 "parser.ypp"
         { (yyval.ast) = nullptr; }
#line 1569 "parser.tab.cpp"
    break;

  case 45: /* cmd_lst: cmd cmd_lst  */
#line 179 "parser.ypp"
                        { vector<AST*> children = {(yyvsp[-1].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_CMD_LIST, children); }
#line 1575 "parser.tab.cpp"
    break;

  case 46: /* print_lst: print_elem  */
#line 186 "parser.ypp"
                                         { vector<AST*> children = {(yyvsp[0].ast), nullptr}; (yyval.ast) = new AST(AST_PRINT_LIST, children); }
#line 1581 "parser.tab.cpp"
    break;

  case 47: /* print_lst: print_elem print_lst  */
#line 187 "parser.ypp"
                                         { vector<AST*> children = {(yyvsp[-1].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_PRINT_LIST, children); }
#line 1587 "parser.tab.cpp"
    break;

  case 48: /* print_elem: LIT_STRING  */
#line 190 "parser.ypp"
                                 { (yyval.ast) = new AST(AST_SYMBOL, {}, (yyvsp[0].symbol)); }
#line 1593 "parser.tab.cpp"
    break;

  case 49: /* print_elem: expr  */
#line 191 "parser.ypp"
                                 { (yyval.ast) = (yyvsp[0].ast); }
#line 1599 "parser.tab.cpp"
    break;

  case 50: /* cmd: TK_IDENTIFIER '=' expr ';'  */
#line 198 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_ASSIGNMENT, children, (yyvsp[-3].symbol));}
#line 1605 "parser.tab.cpp"
    break;

  case 51: /* cmd: TK_IDENTIFIER '[' expr ']' '=' expr ';'  */
#line 199 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-4].ast), (yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_VET_ASSIGNMENT, children, (yyvsp[-6].symbol));}
#line 1611 "parser.tab.cpp"
    break;

  case 52: /* cmd: KW_PRINT print_lst ';'  */
#line 200 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_PRINT, children);}
#line 1617 "parser.tab.cpp"
    break;

  case 53: /* cmd: KW_RETURN expr ';'  */
#line 201 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_RETURN, children);}
#line 1623 "parser.tab.cpp"
    break;

  case 54: /* cmd: KW_READ TK_IDENTIFIER ';'  */
#line 202 "parser.ypp"
                                                { vector<AST*> children; (yyval.ast) = new AST(AST_READ, children, (yyvsp[-1].symbol));}
#line 1629 "parser.tab.cpp"
    break;

  case 55: /* cmd: KW_IF '(' expr ')' cmd  */
#line 203 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_IF_THEN, children);}
#line 1635 "parser.tab.cpp"
    break;

  case 56: /* cmd: KW_IF '(' expr ')' cmd KW_ELSE cmd  */
#line 204 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_IF_THEN_ELSE, children);}
#line 1641 "parser.tab.cpp"
    break;

  case 57: /* cmd: KW_WHILE expr KW_DO cmd  */
#line 205 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_WHILE, children);}
#line 1647 "parser.tab.cpp"
    break;

  case 58: /* cmd: KW_DO cmd KW_WHILE expr ';'  */
#line 206 "parser.ypp"
                                                { vector<AST*> children = {(yyvsp[-3].ast), (yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_DO_WHILE, children);}
#line 1653 "parser.tab.cpp"
    break;

  case 59: /* cmd: cmd_blc  */
#line 207 "parser.ypp"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 1659 "parser.tab.cpp"
    break;

  case 60: /* cmd: ';'  */
#line 208 "parser.ypp"
                                                { (yyval.ast) = nullptr; }
#line 1665 "parser.tab.cpp"
    break;

  case 61: /* cmd: error ';'  */
#line 209 "parser.ypp"
                                          { yyerror("Comando inválido. Recuperado até ;"); yyerrok; yyclearin; (yyval.ast) = nullptr; }
#line 1671 "parser.tab.cpp"
    break;

  case 62: /* par: par_nvazio  */
#line 214 "parser.ypp"
                                  { (yyval.ast) = (yyvsp[0].ast); }
#line 1677 "parser.tab.cpp"
    break;

  case 63: /* par: %empty  */
#line 215 "parser.ypp"
                                  { (yyval.ast) = nullptr; }
#line 1683 "parser.tab.cpp"
    break;

  case 64: /* par_nvazio: expr  */
#line 218 "parser.ypp"
                                  { vector<AST*> children = {(yyvsp[0].ast), nullptr}; (yyval.ast) = new AST(AST_EXP_LIST, children); }
#line 1689 "parser.tab.cpp"
    break;

  case 65: /* par_nvazio: expr ',' par_nvazio  */
#line 219 "parser.ypp"
                                  { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_EXP_LIST, children); }
#line 1695 "parser.tab.cpp"
    break;

  case 66: /* func: TK_IDENTIFIER '(' par ')'  */
#line 224 "parser.ypp"
                                  { vector<AST*> children = {(yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_SYMBOL_FUNC, children, (yyvsp[-3].symbol)); }
#line 1701 "parser.tab.cpp"
    break;

  case 67: /* expr: func  */
#line 226 "parser.ypp"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 1707 "parser.tab.cpp"
    break;

  case 68: /* expr: TK_IDENTIFIER '[' expr ']'  */
#line 227 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-1].ast)}; (yyval.ast) = new AST(AST_SYMBOL_VEC, children, (yyvsp[-3].symbol)); }
#line 1713 "parser.tab.cpp"
    break;

  case 69: /* expr: TK_IDENTIFIER  */
#line 228 "parser.ypp"
                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1719 "parser.tab.cpp"
    break;

  case 70: /* expr: LIT_INT  */
#line 229 "parser.ypp"
                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1725 "parser.tab.cpp"
    break;

  case 71: /* expr: LIT_CHAR  */
#line 230 "parser.ypp"
                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1731 "parser.tab.cpp"
    break;

  case 72: /* expr: LIT_REAL  */
#line 231 "parser.ypp"
                                { vector<AST*> children; (yyval.ast) = new AST(AST_SYMBOL, children, (yyvsp[0].symbol)); }
#line 1737 "parser.tab.cpp"
    break;

  case 73: /* expr: expr '+' expr  */
#line 233 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_ADD, children); }
#line 1743 "parser.tab.cpp"
    break;

  case 74: /* expr: expr '-' expr  */
#line 234 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_SUB, children); }
#line 1749 "parser.tab.cpp"
    break;

  case 75: /* expr: expr '*' expr  */
#line 235 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_MUL, children); }
#line 1755 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '/' expr  */
#line 236 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_DIV, children); }
#line 1761 "parser.tab.cpp"
    break;

  case 77: /* expr: expr '&' expr  */
#line 237 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_AND, children); }
#line 1767 "parser.tab.cpp"
    break;

  case 78: /* expr: expr '|' expr  */
#line 238 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_OR, children); }
#line 1773 "parser.tab.cpp"
    break;

  case 79: /* expr: expr '<' expr  */
#line 239 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_LESS, children); }
#line 1779 "parser.tab.cpp"
    break;

  case 80: /* expr: expr '>' expr  */
#line 240 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_GRT, children); }
#line 1785 "parser.tab.cpp"
    break;

  case 81: /* expr: '~' expr  */
#line 241 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[0].ast)}; (yyval.ast) = new AST(AST_NOT, children); }
#line 1791 "parser.tab.cpp"
    break;

  case 82: /* expr: expr OPERATOR_EQ expr  */
#line 242 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_EQUAL, children); }
#line 1797 "parser.tab.cpp"
    break;

  case 83: /* expr: expr OPERATOR_DIF expr  */
#line 243 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_DIF, children); }
#line 1803 "parser.tab.cpp"
    break;

  case 84: /* expr: expr OPERATOR_GE expr  */
#line 244 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_GE, children); }
#line 1809 "parser.tab.cpp"
    break;

  case 85: /* expr: expr OPERATOR_LE expr  */
#line 245 "parser.ypp"
                                { vector<AST*> children = {(yyvsp[-2].ast), (yyvsp[0].ast)}; (yyval.ast) = new AST(AST_LE, children); }
#line 1815 "parser.tab.cpp"
    break;

  case 86: /* expr: '(' expr ')'  */
#line 246 "parser.ypp"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 1821 "parser.tab.cpp"
    break;


#line 1825 "parser.tab.cpp"

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

#line 249 "parser.ypp"


void yyerror(string msg)
{
    //hasSyntaxError = true;
    if (strcmp(msg.c_str(), "syntax error") != 0)
    {
        syntaxErrorCount++;
    }
    fprintf(stderr, "ERRO DE SINTAXE NA linha %d - %s\n", getLineNumber(), msg.c_str());
}

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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define YYSTYPE char *
extern char* yytext;

extern FILE *inFile;
FILE * outFile;


#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    REAL = 258,                    /* REAL  */
    CHAR = 259,                    /* CHAR  */
    STRING = 260,                  /* STRING  */
    BOOL = 261,                    /* BOOL  */
    VOID = 262,                    /* VOID  */
    WHILE = 263,                   /* WHILE  */
    FOR = 264,                     /* FOR  */
    DO = 265,                      /* DO  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    BREAK = 268,                   /* BREAK  */
    NUM = 269,                     /* NUM  */
    ID = 270,                      /* ID  */
    MAIN = 271,                    /* MAIN  */
    DECLARE = 272,                 /* DECLARE  */
    SET = 273,                     /* SET  */
    ADD = 274,                     /* ADD  */
    SUB = 275,                     /* SUB  */
    MULTI = 276,                   /* MULTI  */
    DIV = 277,                     /* DIV  */
    POWER = 278,                   /* POWER  */
    TRUE_ = 279,                   /* TRUE_  */
    FALSE_ = 280,                  /* FALSE_  */
    MODULUS = 281,                 /* MODULUS  */
    CHAR_CONSTANT = 282,           /* CHAR_CONSTANT  */
    CONSTANT = 283,                /* CONSTANT  */
    ASGN = 284,                    /* ASGN  */
    LOR = 285,                     /* LOR  */
    LAND = 286,                    /* LAND  */
    BOR = 287,                     /* BOR  */
    BXOR = 288,                    /* BXOR  */
    BAND = 289,                    /* BAND  */
    LNOT = 290,                    /* LNOT  */
    EQ = 291,                      /* EQ  */
    NE = 292,                      /* NE  */
    LE = 293,                      /* LE  */
    GE = 294,                      /* GE  */
    LT = 295,                      /* LT  */
    GT = 296,                      /* GT  */
    UMINUS = 297                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define REAL 258
#define CHAR 259
#define STRING 260
#define BOOL 261
#define VOID 262
#define WHILE 263
#define FOR 264
#define DO 265
#define IF 266
#define ELSE 267
#define BREAK 268
#define NUM 269
#define ID 270
#define MAIN 271
#define DECLARE 272
#define SET 273
#define ADD 274
#define SUB 275
#define MULTI 276
#define DIV 277
#define POWER 278
#define TRUE_ 279
#define FALSE_ 280
#define MODULUS 281
#define CHAR_CONSTANT 282
#define CONSTANT 283
#define ASGN 284
#define LOR 285
#define LAND 286
#define BOR 287
#define BXOR 288
#define BAND 289
#define LNOT 290
#define EQ 291
#define NE 292
#define LE 293
#define GE 294
#define LT 295
#define GT 296
#define UMINUS 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_REAL = 3,                       /* REAL  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_BREAK = 13,                     /* BREAK  */
  YYSYMBOL_NUM = 14,                       /* NUM  */
  YYSYMBOL_ID = 15,                        /* ID  */
  YYSYMBOL_MAIN = 16,                      /* MAIN  */
  YYSYMBOL_DECLARE = 17,                   /* DECLARE  */
  YYSYMBOL_SET = 18,                       /* SET  */
  YYSYMBOL_ADD = 19,                       /* ADD  */
  YYSYMBOL_SUB = 20,                       /* SUB  */
  YYSYMBOL_MULTI = 21,                     /* MULTI  */
  YYSYMBOL_DIV = 22,                       /* DIV  */
  YYSYMBOL_POWER = 23,                     /* POWER  */
  YYSYMBOL_TRUE_ = 24,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 25,                    /* FALSE_  */
  YYSYMBOL_MODULUS = 26,                   /* MODULUS  */
  YYSYMBOL_CHAR_CONSTANT = 27,             /* CHAR_CONSTANT  */
  YYSYMBOL_CONSTANT = 28,                  /* CONSTANT  */
  YYSYMBOL_ASGN = 29,                      /* ASGN  */
  YYSYMBOL_LOR = 30,                       /* LOR  */
  YYSYMBOL_LAND = 31,                      /* LAND  */
  YYSYMBOL_BOR = 32,                       /* BOR  */
  YYSYMBOL_BXOR = 33,                      /* BXOR  */
  YYSYMBOL_BAND = 34,                      /* BAND  */
  YYSYMBOL_LNOT = 35,                      /* LNOT  */
  YYSYMBOL_EQ = 36,                        /* EQ  */
  YYSYMBOL_NE = 37,                        /* NE  */
  YYSYMBOL_LE = 38,                        /* LE  */
  YYSYMBOL_GE = 39,                        /* GE  */
  YYSYMBOL_LT = 40,                        /* LT  */
  YYSYMBOL_GT = 41,                        /* GT  */
  YYSYMBOL_UMINUS = 42,                    /* UMINUS  */
  YYSYMBOL_43_ = 43,                       /* '$'  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_start_program = 51,             /* start_program  */
  YYSYMBOL_statement_start = 52,           /* statement_start  */
  YYSYMBOL_statement_body = 53,            /* statement_body  */
  YYSYMBOL_statement = 54,                 /* statement  */
  YYSYMBOL_for_statement = 55,             /* for_statement  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_do_statement = 59,              /* do_statement  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_if_statement = 62,              /* if_statement  */
  YYSYMBOL_63_6 = 63,                      /* $@6  */
  YYSYMBOL_else_statement = 64,            /* else_statement  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_while_statement = 66,           /* while_statement  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_do_while_body = 69,             /* do_while_body  */
  YYSYMBOL_whilebody = 70,                 /* whilebody  */
  YYSYMBOL_declare_statement = 71,         /* declare_statement  */
  YYSYMBOL_72_10 = 72,                     /* $@10  */
  YYSYMBOL_73_11 = 73,                     /* $@11  */
  YYSYMBOL_ids = 74,                       /* ids  */
  YYSYMBOL_75_12 = 75,                     /* $@12  */
  YYSYMBOL_assign_statement = 76,          /* assign_statement  */
  YYSYMBOL_77_13 = 77,                     /* $@13  */
  YYSYMBOL_78_14 = 78,                     /* $@14  */
  YYSYMBOL_79_15 = 79,                     /* $@15  */
  YYSYMBOL_assign_statement_2 = 80,        /* assign_statement_2  */
  YYSYMBOL_81_16 = 81,                     /* $@16  */
  YYSYMBOL_82_17 = 82,                     /* $@17  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_84_18 = 84,                     /* $@18  */
  YYSYMBOL_85_19 = 85,                     /* $@19  */
  YYSYMBOL_86_20 = 86,                     /* $@20  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_88_22 = 88,                     /* $@22  */
  YYSYMBOL_89_23 = 89,                     /* $@23  */
  YYSYMBOL_90_24 = 90,                     /* $@24  */
  YYSYMBOL_91_25 = 91,                     /* $@25  */
  YYSYMBOL_92_26 = 92,                     /* $@26  */
  YYSYMBOL_93_27 = 93,                     /* $@27  */
  YYSYMBOL_94_28 = 94,                     /* $@28  */
  YYSYMBOL_95_29 = 95,                     /* $@29  */
  YYSYMBOL_96_30 = 96,                     /* $@30  */
  YYSYMBOL_97_31 = 97,                     /* $@31  */
  YYSYMBOL_98_32 = 98,                     /* $@32  */
  YYSYMBOL_99_33 = 99,                     /* $@33  */
  YYSYMBOL_100_34 = 100,                   /* $@34  */
  YYSYMBOL_101_35 = 101,                   /* $@35  */
  YYSYMBOL_TYPE = 102                      /* TYPE  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   413

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
       2,     2,     2,     2,     2,     2,    43,     2,     2,     2,
      45,    46,     2,    49,    47,    48,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    42,    43,    46,    47,    50,    51,    52,
      53,    54,    55,    56,    59,    59,    59,    59,    62,    62,
      62,    65,    65,    67,    67,    68,    71,    71,    71,    74,
      75,    78,    79,    83,    83,    83,    84,    87,    88,    88,
      91,    91,    91,    91,    95,    95,    95,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   116,   117,   118,   118,   119,   120,   125,   126,
     127,   128
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
  "\"end of file\"", "error", "\"invalid token\"", "REAL", "CHAR",
  "STRING", "BOOL", "VOID", "WHILE", "FOR", "DO", "IF", "ELSE", "BREAK",
  "NUM", "ID", "MAIN", "DECLARE", "SET", "ADD", "SUB", "MULTI", "DIV",
  "POWER", "TRUE_", "FALSE_", "MODULUS", "CHAR_CONSTANT", "CONSTANT",
  "ASGN", "LOR", "LAND", "BOR", "BXOR", "BAND", "LNOT", "EQ", "NE", "LE",
  "GE", "LT", "GT", "UMINUS", "'$'", "';'", "'('", "')'", "','", "'-'",
  "'+'", "$accept", "start_program", "statement_start", "statement_body",
  "statement", "for_statement", "$@1", "$@2", "$@3", "do_statement", "$@4",
  "$@5", "if_statement", "$@6", "else_statement", "$@7", "while_statement",
  "$@8", "$@9", "do_while_body", "whilebody", "declare_statement", "$@10",
  "$@11", "ids", "$@12", "assign_statement", "$@13", "$@14", "$@15",
  "assign_statement_2", "$@16", "$@17", "expression", "$@18", "$@19",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28",
  "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "TYPE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    13,    12,     8,   -51,   -51,   -51,   -51,   -51,   -51,
     -30,    16,    -3,   -51,   -51,   -18,    17,   -51,    -9,    -3,
     -51,    24,   -51,    28,   -51,   -51,    31,   -51,   -51,   -21,
      52,   -51,   -51,   -51,    -5,    11,    20,   -51,    58,   -51,
     -51,   -51,    52,    52,    52,    89,    45,    62,   -51,   -51,
      68,    52,   -51,   120,   144,   361,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,    36,
      53,    54,    57,    59,    60,   -51,    71,    46,    50,   175,
     -21,   -51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,   -30,    43,    52,    52,    52,    52,
      52,    52,   -51,   -51,    52,   -51,   -51,    56,    56,   -14,
     -14,   -14,   -14,   364,   364,    49,    49,    49,    49,    87,
     -51,   340,   316,   292,   268,   120,   120,    72,    52,   120,
      19,   -51,   -51,    52,    63,   -51,   206,    67,   -51,   -51,
     -51,   -30,   237,   -51,    52,   -51,    70,   -51,   -51,   120,
      62,   -51,    78,    19,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      36,     0,     0,     0,    88,    89,    90,    91,    33,     1,
       4,     0,     6,     2,    34,     0,     0,    13,     0,     6,
      11,     0,    12,     0,     9,    10,     0,     7,     8,     0,
       0,    40,     3,     5,     0,     4,     0,    37,     0,    35,
      87,    86,     0,     0,     0,    71,     0,     0,    29,    30,
       0,     0,    38,    82,    71,    81,    47,    49,    51,    53,
      57,    55,    69,    67,    61,    65,    59,    63,    21,     0,
       0,     0,     0,     0,     0,    41,     0,     0,     0,    71,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,    44,    15,     0,    27,    39,    48,    50,    52,
      54,    58,    56,    70,    68,    62,    66,    60,    64,    25,
      84,    72,    74,    76,    78,    80,    42,     0,     0,    19,
       4,    23,    22,     0,     0,    45,    71,     0,    31,    32,
      28,     4,    71,    43,     0,    16,     0,    24,    85,    46,
       0,    20,     0,     4,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,   -10,    83,   -34,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -50,   106,   -51,   -51,    37,   -51,   -51,   -51,   -51,   -51,
     -32,   -51,   -51,   -40,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,   138,    18,    19,    20,    21,   128,   150,    22,
      23,   137,    24,    94,   132,   141,    25,    26,   130,    50,
     140,    27,    11,    29,    39,    80,    28,    46,   101,   134,
      77,   127,   144,    45,    82,    83,    84,    85,    87,    86,
      92,    90,    93,    91,    89,    88,    70,    71,    72,    73,
      74,   133,     8
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    49,    53,    54,    55,   -26,   -14,   -18,    15,    60,
       1,    79,     9,    12,     1,    16,     4,     5,     6,     7,
     -14,   -18,    15,    37,    10,    48,    38,    30,     1,    16,
      15,    14,    31,    34,    32,    69,     1,    16,    35,    36,
      47,    17,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    12,    17,   121,   122,   123,   124,
     125,   126,    12,    17,   129,    51,    40,    41,    56,    57,
      58,    59,    60,    52,    75,    61,    78,    58,    59,    60,
      76,    95,    61,    96,   119,    97,   102,    42,   136,    98,
     103,   120,    99,   142,   100,   104,   139,    43,    69,   131,
      44,   135,    33,   154,   149,    69,     3,   143,    56,    57,
      58,    59,    60,   146,   151,    61,     0,   106,   152,   139,
     -73,   -75,   -77,   -79,   153,    62,    63,    64,    65,    66,
      67,   147,     0,     0,     0,    68,     0,     0,    69,    56,
      57,    58,    59,    60,     0,     0,    61,     0,     0,     0,
     -71,   -73,   -75,   -77,   -79,     0,    62,    63,    64,    65,
      66,    67,     0,    56,    57,    58,    59,    60,     0,    69,
      61,     0,     0,     0,     0,   -73,   -75,   -77,   -79,     0,
      62,    63,    64,    65,    66,    67,     0,     0,     0,     0,
      81,     0,     0,    69,    56,    57,    58,    59,    60,     0,
       0,    61,     0,     0,     0,     0,   -73,   -75,   -77,   -79,
       0,    62,    63,    64,    65,    66,    67,     0,     0,     0,
       0,   105,     0,     0,    69,    56,    57,    58,    59,    60,
       0,     0,    61,     0,     0,     0,     0,   -73,   -75,   -77,
     -79,     0,    62,    63,    64,    65,    66,    67,     0,     0,
     145,     0,     0,     0,     0,    69,    56,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,   -73,   -75,
     -77,   -79,     0,    62,    63,    64,    65,    66,    67,     0,
       0,     0,     0,   148,     0,     0,    69,    56,    57,    58,
      59,    60,     0,     0,    61,     0,     0,     0,   -71,   -73,
     -75,   -77,     0,     0,    62,    63,    64,    65,    66,    67,
       0,    56,    57,    58,    59,    60,     0,    69,    61,     0,
       0,     0,   -71,   -73,   -75,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,    56,    57,    58,    59,    60,
       0,    69,    61,     0,     0,     0,   -71,   -73,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,    56,
      57,    58,    59,    60,     0,    69,    61,     0,     0,     0,
     -71,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,    56,    57,    58,    59,    60,     0,    69,
      61,   -71,   -73,   -75,   -77,   -79,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,     0,     0,     0,     0,
      69,     0,     0,    69
};

static const yytype_int16 yycheck[] =
{
      10,    35,    42,    43,    44,     8,     9,    10,    11,    23,
      17,    51,     0,    43,    17,    18,     3,     4,     5,     6,
       9,    10,    11,    44,    16,    35,    47,    45,    17,    18,
      11,    15,    15,     9,    43,    49,    17,    18,    10,     8,
      45,    44,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    43,    44,    96,    97,    98,    99,
     100,   101,    43,    44,   104,    45,    14,    15,    19,    20,
      21,    22,    23,    15,    29,    26,     8,    21,    22,    23,
      18,    45,    26,    30,    94,    31,    15,    35,   128,    32,
      44,    48,    33,   133,    34,    45,   130,    45,    49,    12,
      48,    29,    19,   153,   144,    49,     0,    44,    19,    20,
      21,    22,    23,    46,    44,    26,    -1,    80,   150,   153,
      31,    32,    33,    34,    46,    36,    37,    38,    39,    40,
      41,   141,    -1,    -1,    -1,    46,    -1,    -1,    49,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    19,    20,    21,    22,    23,    -1,    49,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    19,    20,    21,    22,    23,    -1,    49,    26,    -1,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    19,    20,    21,    22,    23,
      -1,    49,    26,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    19,
      20,    21,    22,    23,    -1,    49,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    19,    20,    21,    22,    23,    -1,    49,
      26,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    51,    71,     3,     4,     5,     6,   102,     0,
      16,    72,    43,    52,    15,    11,    18,    44,    53,    54,
      55,    56,    59,    60,    62,    66,    67,    71,    76,    73,
      45,    15,    43,    53,     9,    10,     8,    44,    47,    74,
      14,    15,    35,    45,    48,    83,    77,    45,    52,    54,
      69,    45,    15,    83,    83,    83,    19,    20,    21,    22,
      23,    26,    36,    37,    38,    39,    40,    41,    46,    49,
      96,    97,    98,    99,   100,    29,    18,    80,     8,    83,
      75,    46,    84,    85,    86,    87,    89,    88,    95,    94,
      91,    93,    90,    92,    63,    45,    30,    31,    32,    33,
      34,    78,    15,    44,    45,    46,    74,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    52,
      48,    83,    83,    83,    83,    83,    83,    81,    57,    83,
      68,    12,    64,   101,    79,    29,    83,    61,    52,    54,
      70,    65,    83,    44,    82,    44,    46,    52,    46,    83,
      58,    44,    80,    46,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    54,    54,
      54,    54,    54,    54,    56,    57,    58,    55,    60,    61,
      59,    63,    62,    65,    64,    64,    67,    68,    66,    69,
      69,    70,    70,    72,    73,    71,    71,    74,    75,    74,
      77,    78,    79,    76,    81,    82,    80,    84,    83,    85,
      83,    86,    83,    87,    83,    88,    83,    89,    83,    90,
      83,    91,    83,    92,    83,    93,    83,    94,    83,    95,
      83,    96,    83,    97,    83,    98,    83,    99,    83,   100,
      83,    83,    83,    83,   101,    83,    83,    83,   102,   102,
     102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     0,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     0,    12,     0,     0,
       9,     0,     7,     0,     3,     0,     0,     0,     7,     1,
       1,     1,     1,     0,     0,     6,     0,     1,     0,     4,
       0,     0,     0,     8,     0,     0,     6,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     2,     2,     3,     0,     7,     1,     1,     1,     1,
       1,     1
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
  case 14: /* $@1: %empty  */
#line 59 "parser.y"
                          {forStart();}
#line 1464 "y.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 59 "parser.y"
                                                                       {forMiddle();}
#line 1470 "y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 59 "parser.y"
                                                                                                     {forRepetition();}
#line 1476 "y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 62 "parser.y"
                       {whileStart();}
#line 1482 "y.tab.c"
    break;

  case 19: /* $@5: %empty  */
#line 62 "parser.y"
                                                                               {whileRepetition();}
#line 1488 "y.tab.c"
    break;

  case 20: /* do_statement: $@4 DO do_while_body WHILE '(' expression $@5 ')' ';'  */
#line 62 "parser.y"
                                                                                                            {whileEnd();}
#line 1494 "y.tab.c"
    break;

  case 21: /* $@6: %empty  */
#line 65 "parser.y"
                                                 {ifLabel();}
#line 1500 "y.tab.c"
    break;

  case 23: /* $@7: %empty  */
#line 67 "parser.y"
                               {elseLabel();}
#line 1506 "y.tab.c"
    break;

  case 24: /* else_statement: ELSE $@7 statement_start  */
#line 67 "parser.y"
                                                              {ifElseEndLabel();}
#line 1512 "y.tab.c"
    break;

  case 25: /* else_statement: %empty  */
#line 68 "parser.y"
                                        {ifElseEndLabel();}
#line 1518 "y.tab.c"
    break;

  case 26: /* $@8: %empty  */
#line 71 "parser.y"
                         { whileStart();}
#line 1524 "y.tab.c"
    break;

  case 27: /* $@9: %empty  */
#line 71 "parser.y"
                                                                   {whileRepetition();}
#line 1530 "y.tab.c"
    break;

  case 31: /* whilebody: statement_start  */
#line 78 "parser.y"
                                          {whileEnd();}
#line 1536 "y.tab.c"
    break;

  case 32: /* whilebody: statement  */
#line 79 "parser.y"
                                            {whileEnd();}
#line 1542 "y.tab.c"
    break;

  case 33: /* $@10: %empty  */
#line 83 "parser.y"
                                       {setDatatype(yyvsp[0]);}
#line 1548 "y.tab.c"
    break;

  case 34: /* $@11: %empty  */
#line 83 "parser.y"
                                                              {insertIntoSymbolTable("identifier");}
#line 1554 "y.tab.c"
    break;

  case 38: /* $@12: %empty  */
#line 88 "parser.y"
                                          {insertIntoSymbolTable("identifier");}
#line 1560 "y.tab.c"
    break;

  case 40: /* $@13: %empty  */
#line 91 "parser.y"
                                                {pushIdNum(); invokeId();}
#line 1566 "y.tab.c"
    break;

  case 41: /* $@14: %empty  */
#line 91 "parser.y"
                                                                                        {pushop("=");}
#line 1572 "y.tab.c"
    break;

  case 42: /* $@15: %empty  */
#line 91 "parser.y"
                                                                                                                        { codeGenerateAssign();}
#line 1578 "y.tab.c"
    break;

  case 44: /* $@16: %empty  */
#line 95 "parser.y"
                                        {pushIdNum(); invokeId();}
#line 1584 "y.tab.c"
    break;

  case 45: /* $@17: %empty  */
#line 95 "parser.y"
                                                                                {pushop("=");}
#line 1590 "y.tab.c"
    break;

  case 46: /* assign_statement_2: SET ID $@16 ASGN $@17 expression  */
#line 95 "parser.y"
                                                                                                                {codeGenerateAssign();}
#line 1596 "y.tab.c"
    break;

  case 47: /* $@18: %empty  */
#line 98 "parser.y"
                                                        {pushop("+");}
#line 1602 "y.tab.c"
    break;

  case 48: /* expression: expression ADD $@18 expression  */
#line 98 "parser.y"
                                                                                    {generateAlgebric(); }
#line 1608 "y.tab.c"
    break;

  case 49: /* $@19: %empty  */
#line 99 "parser.y"
                                                 {pushop("-");}
#line 1614 "y.tab.c"
    break;

  case 50: /* expression: expression SUB $@19 expression  */
#line 99 "parser.y"
                                                                             {generateAlgebric();}
#line 1620 "y.tab.c"
    break;

  case 51: /* $@20: %empty  */
#line 100 "parser.y"
                                                   {pushop("*");}
#line 1626 "y.tab.c"
    break;

  case 52: /* expression: expression MULTI $@20 expression  */
#line 100 "parser.y"
                                                                               {generateAlgebric();}
#line 1632 "y.tab.c"
    break;

  case 53: /* $@21: %empty  */
#line 101 "parser.y"
                                                 {pushop("/");}
#line 1638 "y.tab.c"
    break;

  case 54: /* expression: expression DIV $@21 expression  */
#line 101 "parser.y"
                                                                             {generateAlgebric();}
#line 1644 "y.tab.c"
    break;

  case 55: /* $@22: %empty  */
#line 102 "parser.y"
                                                     {pushop("%");}
#line 1650 "y.tab.c"
    break;

  case 56: /* expression: expression MODULUS $@22 expression  */
#line 102 "parser.y"
                                                                                 {generateAlgebric();}
#line 1656 "y.tab.c"
    break;

  case 57: /* $@23: %empty  */
#line 103 "parser.y"
                                                   {pushop("^");}
#line 1662 "y.tab.c"
    break;

  case 58: /* expression: expression POWER $@23 expression  */
#line 103 "parser.y"
                                                                               {generateAlgebric();}
#line 1668 "y.tab.c"
    break;

  case 59: /* $@24: %empty  */
#line 104 "parser.y"
                                 {pushop("<");}
#line 1674 "y.tab.c"
    break;

  case 60: /* expression: expression LT $@24 expression  */
#line 104 "parser.y"
                                                             {generateLogical();}
#line 1680 "y.tab.c"
    break;

  case 61: /* $@25: %empty  */
#line 105 "parser.y"
                                                 {pushop("<=");}
#line 1686 "y.tab.c"
    break;

  case 62: /* expression: expression LE $@25 expression  */
#line 105 "parser.y"
                                                                              {generateLogical();}
#line 1692 "y.tab.c"
    break;

  case 63: /* $@26: %empty  */
#line 106 "parser.y"
                                                 {pushop(">");}
#line 1698 "y.tab.c"
    break;

  case 64: /* expression: expression GT $@26 expression  */
#line 106 "parser.y"
                                                                             {generateLogical();}
#line 1704 "y.tab.c"
    break;

  case 65: /* $@27: %empty  */
#line 107 "parser.y"
                                                 {pushop(">=");}
#line 1710 "y.tab.c"
    break;

  case 66: /* expression: expression GE $@27 expression  */
#line 107 "parser.y"
                                                                              {generateLogical();}
#line 1716 "y.tab.c"
    break;

  case 67: /* $@28: %empty  */
#line 108 "parser.y"
                                                 {pushop("!=");}
#line 1722 "y.tab.c"
    break;

  case 68: /* expression: expression NE $@28 expression  */
#line 108 "parser.y"
                                                                              {generateLogical();}
#line 1728 "y.tab.c"
    break;

  case 69: /* $@29: %empty  */
#line 109 "parser.y"
                                                 {pushop("==");}
#line 1734 "y.tab.c"
    break;

  case 70: /* expression: expression EQ $@29 expression  */
#line 109 "parser.y"
                                                                              {generateLogical();}
#line 1740 "y.tab.c"
    break;

  case 71: /* $@30: %empty  */
#line 110 "parser.y"
                              {pushop("||");}
#line 1746 "y.tab.c"
    break;

  case 72: /* expression: expression $@30 LOR expression  */
#line 110 "parser.y"
                                                                {generateLogical();}
#line 1752 "y.tab.c"
    break;

  case 73: /* $@31: %empty  */
#line 111 "parser.y"
                                              {pushop("&&");}
#line 1758 "y.tab.c"
    break;

  case 74: /* expression: expression $@31 LAND expression  */
#line 111 "parser.y"
                                                                                {generateLogical();}
#line 1764 "y.tab.c"
    break;

  case 75: /* $@32: %empty  */
#line 112 "parser.y"
                                              {pushop("|");}
#line 1770 "y.tab.c"
    break;

  case 76: /* expression: expression $@32 BOR expression  */
#line 112 "parser.y"
                                                                               {generateLogical();}
#line 1776 "y.tab.c"
    break;

  case 77: /* $@33: %empty  */
#line 113 "parser.y"
                                              {pushop("XOR");}
#line 1782 "y.tab.c"
    break;

  case 78: /* expression: expression $@33 BXOR expression  */
#line 113 "parser.y"
                                                                                 {generateLogical();}
#line 1788 "y.tab.c"
    break;

  case 79: /* $@34: %empty  */
#line 114 "parser.y"
                                              {pushop("&");}
#line 1794 "y.tab.c"
    break;

  case 80: /* expression: expression $@34 BAND expression  */
#line 114 "parser.y"
                                                                               {generateLogical();}
#line 1800 "y.tab.c"
    break;

  case 81: /* expression: '-' expression  */
#line 115 "parser.y"
                                                              {generateUnaryMinus();}
#line 1806 "y.tab.c"
    break;

  case 82: /* expression: LNOT expression  */
#line 116 "parser.y"
                                                   {lNOT_func();}
#line 1812 "y.tab.c"
    break;

  case 84: /* $@35: %empty  */
#line 118 "parser.y"
                                                         {pushop('-');}
#line 1818 "y.tab.c"
    break;

  case 85: /* expression: expression '+' '(' '-' $@35 expression ')'  */
#line 118 "parser.y"
                                                                                       {generateAlgebric(); }
#line 1824 "y.tab.c"
    break;

  case 86: /* expression: ID  */
#line 119 "parser.y"
                                      {yyval=yyvsp[0]; check(); pushIdNum();  }
#line 1830 "y.tab.c"
    break;

  case 87: /* expression: NUM  */
#line 120 "parser.y"
                                      {yyval=yyvsp[0]; pushIdNum();  mapNum(yyvsp[0]); }
#line 1836 "y.tab.c"
    break;


#line 1840 "y.tab.c"

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

#line 132 "parser.y"



#include"lex.yy.c"


int count=0;

char stack[1000][10];
int top=0;
int i=0;
char temp[2]="t";

int label[200];
int labelNumber=0;
int labelTop=0;
int stop=0;
char type[10];

char* tempId;

struct Table
{
	char id[20];
	char type[10];
	char category[15];
	int value;
	int lineno;
}symbolTable[10000];

int tableLength=0;

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	outFile=fopen("result_IC.txt","w");

    printf("\n\nRunning for %s :\n\n", argv[1]);
	
   if(!yyparse())
		printf("\nParsing successful:)\n");
	else
	{
		printf("\nParsing unsuccessful:(\n");
		exit(0);
	}

	printf("\nSymbol Table : \n\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("|    SNo.    |       name       |       Datatype    |     Category      |       Value      |      Lineno      |\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	for(int i=0; i<tableLength; i++){
	printf("|     %d     |        %s        |      %s       |       %s         |      %d         |       %d         |\n", i+1, symbolTable[i].id, symbolTable[i].type, symbolTable[i].category, symbolTable[i].value, symbolTable[i].lineno);
	}
	printf("---------------------------------------------------------------------------------------------------------------\n");

	printf("\n\nCheck the result_IC.txt file for three address code output :D\n\n");
	fclose(yyin);
	fclose(outFile);
	
    return 0;
}
         
yyerror(char *s) {
	printf("Syntex Error in line number : %d : %s %s\n", yylineno, s, yytext );
}
    
pushIdNum()
{
  	strcpy(stack[++top],yytext);
}

pushop(char* optr)
{
  	strcpy(stack[++top],optr);
}

generateLogical()
{
 	sprintf(temp,"t%d",i);
  	fprintf(outFile,"\t%s=%s%s%s\n",temp,stack[top-2],stack[top-1],stack[top]);
  	top-=2;
 	strcpy(stack[top],temp);
 	i++;
}

generateAlgebric()
{
 	sprintf(temp,"t%d",i); // converts temp to reqd format
  	fprintf(outFile,"\t%s=%s%s%s\n",temp,stack[top-2],stack[top-1],stack[top]);
  	top-=2;
 	strcpy(stack[top],temp);
 	i++;
}
codeGenerateAssign()
{
 	fprintf(outFile,"\t%s=%s\n",stack[top-2],stack[top]);
 	top-=3;
}
generateUnaryMinus()
{
   	sprintf(temp,"t%d",i);
   	fprintf(outFile,"\t%s=-%s\n",temp,stack[top]);
   	strcpy(stack[top],temp);
   	i++;
}

lNOT_func()
{
   	sprintf(temp,"t%d",i);
   	fprintf(outFile,"\t%s= not %s\n",temp,stack[top]);
   	strcpy(stack[top],temp);
   	i++;
}

ifLabel()
{
 	labelNumber++;
 	fprintf(outFile,"\tif( not %s)",stack[top]);
 	fprintf(outFile,"\tgoto L%d\n",labelNumber);
 	label[++labelTop]=labelNumber;
}

elseLabel()
{
	int x;
	labelNumber++;
	x=label[labelTop--]; 
	fprintf(outFile,"\tgoto L%d\n",labelNumber);
	fprintf(outFile,"L%d: \n",x); 
	label[++labelTop]=labelNumber;
}

ifElseEndLabel()
{
	int y;
	y=label[labelTop--];
	fprintf(outFile,"L%d: \n",y);
	top--;
}
forStart()
{
	labelNumber++;
	
	fprintf(outFile,"L%d:\n",labelNumber);
}
forMiddle()
{
	labelNumber++;
	label[++labelTop]=labelNumber;
	fprintf(outFile,"L%d:\n",labelNumber);
}
forRepetition()
{
	labelNumber++;
 	fprintf(outFile,"\tif( not %s)",stack[top]);
 	fprintf(outFile,"\tgoto L%d\n",labelNumber);
 	label[++labelTop]=labelNumber;
}
whileStart()
{
	labelNumber++;
	label[++labelTop]=labelNumber;
	fprintf(outFile,"L%d:\n",labelNumber);
}
whileRepetition()
{
	labelNumber++;
 	fprintf(outFile,"\tif( not %s)",stack[top]);
 	fprintf(outFile,"\tgoto L%d\n",labelNumber);
 	label[++labelTop]=labelNumber;
}
whileEnd()
{
	int x,y;	y=label[labelTop--];
	x=label[labelTop--];
	fprintf(outFile,"\tgoto L%d\n",x);
	fprintf(outFile,"L%d: \n",y);
	top--;
}

/* for symbol table*/

check()
{
	char temp[20];
	strcpy(temp,yytext);
	int flag=0;
	for(i=0;i<tableLength;i++)
	{
		if(!strcmp(symbolTable[i].id,temp))
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		yyerror("Variable is not declard");
		exit(0);
	}
}

setDatatype(char* t)
{
	strcpy(type,t);
}


insertIntoSymbolTable(char* category)
{
	char temp[20];
	int i,flag;
	flag=0;
	strcpy(temp,yytext);
	for(i=0;i<tableLength;i++)
	{
		if(!strcmp(symbolTable[i].id,temp))
			{
			flag=1;
			break;
				}
	}
	if(flag)
	{
		yyerror("Redeclare of ");
		exit(0);
	}
	else
	{
		strcpy(symbolTable[tableLength].id,temp);
		strcpy(symbolTable[tableLength].type,type);
		strcpy(symbolTable[tableLength].category,category);
		symbolTable[tableLength].lineno = yylineno;

		tableLength++;
	}
}


void update(char *token,int value)
{
  int flag = 0;
  for(int i = 0;i < tableLength;i++)
  {
    if(!strcmp(symbolTable[i].id,token))
    {
      flag = 1;
      symbolTable[i].value = (int*)malloc(sizeof(int));
      symbolTable[i].value=value;
      return;
    }
  }
  if(flag == 0)
  {
    printf("Error at line %d : %s is not defined\n",8,token);
    exit(0);
  }
}


void invokeId(){
	tempId = strdup(yytext);
}

void mapNum(int val){
	update(tempId, val);
}

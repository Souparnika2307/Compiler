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
#line 1 "gptprogram.y"

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "tree.h" // Include tree.h header file
extern FILE *yyin;
extern int yylineno ;
TreeNode *program; // Declare a global variable to store the parse tree root
int intArr[100];
bool flag = false;

void yyerror(char*);

// Function to add a child to a TreeNode
void addChild(TreeNode *parent, TreeNode *child) {
    if (parent->numChildren == 0) {
        parent->children = (TreeNode **)malloc(sizeof(TreeNode *));
    } else {
        parent->children = (TreeNode **)realloc(parent->children, (parent->numChildren + 1) * sizeof(TreeNode *));
    }
    parent->children[parent->numChildren++] = child;
}


#line 96 "y.tab.c"

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
    ID = 258,                      /* ID  */
    CONSTANT = 259,                /* CONSTANT  */
    FUNC = 260,                    /* FUNC  */
    POWER = 261,                   /* POWER  */
    CHAR_CONSTANT = 262,           /* CHAR_CONSTANT  */
    SET = 263,                     /* SET  */
    REAL = 264,                    /* REAL  */
    CHAR = 265,                    /* CHAR  */
    STRING = 266,                  /* STRING  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    LOOP = 268,                    /* LOOP  */
    IF = 269,                      /* IF  */
    ELSE = 270,                    /* ELSE  */
    ELIF = 271,                    /* ELIF  */
    CASE = 272,                    /* CASE  */
    DECLARE = 273,                 /* DECLARE  */
    BREAK = 274,                   /* BREAK  */
    RETURN = 275,                  /* RETURN  */
    CONTINUE = 276,                /* CONTINUE  */
    DEFAULT = 277,                 /* DEFAULT  */
    TRUE_ = 278,                   /* TRUE_  */
    FALSE_ = 279,                  /* FALSE_  */
    RELOP = 280,                   /* RELOP  */
    OR_RELOP = 281,                /* OR_RELOP  */
    AND_RELOP = 282,               /* AND_RELOP  */
    NOT_RELOP = 283,               /* NOT_RELOP  */
    MULOP = 284,                   /* MULOP  */
    UNARYOP = 285,                 /* UNARYOP  */
    START = 286,                   /* START  */
    END = 287,                     /* END  */
    SWITCH = 288,                  /* SWITCH  */
    NUMBER = 289,                  /* NUMBER  */
    OUTPUT = 290,                  /* OUTPUT  */
    INPUT = 291,                   /* INPUT  */
    SUMOP = 292,                   /* SUMOP  */
    COMMENT = 293,                 /* COMMENT  */
    MAIN = 294                     /* MAIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define CONSTANT 259
#define FUNC 260
#define POWER 261
#define CHAR_CONSTANT 262
#define SET 263
#define REAL 264
#define CHAR 265
#define STRING 266
#define BOOLEAN 267
#define LOOP 268
#define IF 269
#define ELSE 270
#define ELIF 271
#define CASE 272
#define DECLARE 273
#define BREAK 274
#define RETURN 275
#define CONTINUE 276
#define DEFAULT 277
#define TRUE_ 278
#define FALSE_ 279
#define RELOP 280
#define OR_RELOP 281
#define AND_RELOP 282
#define NOT_RELOP 283
#define MULOP 284
#define UNARYOP 285
#define START 286
#define END 287
#define SWITCH 288
#define NUMBER 289
#define OUTPUT 290
#define INPUT 291
#define SUMOP 292
#define COMMENT 293
#define MAIN 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_POWER = 6,                      /* POWER  */
  YYSYMBOL_CHAR_CONSTANT = 7,              /* CHAR_CONSTANT  */
  YYSYMBOL_SET = 8,                        /* SET  */
  YYSYMBOL_REAL = 9,                       /* REAL  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_STRING = 11,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_LOOP = 13,                      /* LOOP  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_ELIF = 16,                      /* ELIF  */
  YYSYMBOL_CASE = 17,                      /* CASE  */
  YYSYMBOL_DECLARE = 18,                   /* DECLARE  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_CONTINUE = 21,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_TRUE_ = 23,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 24,                    /* FALSE_  */
  YYSYMBOL_RELOP = 25,                     /* RELOP  */
  YYSYMBOL_OR_RELOP = 26,                  /* OR_RELOP  */
  YYSYMBOL_AND_RELOP = 27,                 /* AND_RELOP  */
  YYSYMBOL_NOT_RELOP = 28,                 /* NOT_RELOP  */
  YYSYMBOL_MULOP = 29,                     /* MULOP  */
  YYSYMBOL_UNARYOP = 30,                   /* UNARYOP  */
  YYSYMBOL_START = 31,                     /* START  */
  YYSYMBOL_END = 32,                       /* END  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_NUMBER = 34,                    /* NUMBER  */
  YYSYMBOL_OUTPUT = 35,                    /* OUTPUT  */
  YYSYMBOL_INPUT = 36,                     /* INPUT  */
  YYSYMBOL_SUMOP = 37,                     /* SUMOP  */
  YYSYMBOL_COMMENT = 38,                   /* COMMENT  */
  YYSYMBOL_MAIN = 39,                      /* MAIN  */
  YYSYMBOL_40_ = 40,                       /* '+'  */
  YYSYMBOL_41_ = 41,                       /* '-'  */
  YYSYMBOL_42_ = 42,                       /* '^'  */
  YYSYMBOL_43_ = 43,                       /* '*'  */
  YYSYMBOL_44_ = 44,                       /* '/'  */
  YYSYMBOL_45_ = 45,                       /* '%'  */
  YYSYMBOL_46_ = 46,                       /* '$'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_program = 52,                   /* program  */
  YYSYMBOL_declarationlist = 53,           /* declarationlist  */
  YYSYMBOL_main = 54,                      /* main  */
  YYSYMBOL_declaration = 55,               /* declaration  */
  YYSYMBOL_function_definition = 56,       /* function_definition  */
  YYSYMBOL_variable_declaration = 57,      /* variable_declaration  */
  YYSYMBOL_init_dec = 58,                  /* init_dec  */
  YYSYMBOL_params = 59,                    /* params  */
  YYSYMBOL_paramlist = 60,                 /* paramlist  */
  YYSYMBOL_datatype = 61,                  /* datatype  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_simpleexpression = 63,          /* simpleexpression  */
  YYSYMBOL_andexpression = 64,             /* andexpression  */
  YYSYMBOL_unaryrelexpression = 65,        /* unaryrelexpression  */
  YYSYMBOL_relexpression = 66,             /* relexpression  */
  YYSYMBOL_sumexpression = 67,             /* sumexpression  */
  YYSYMBOL_term = 68,                      /* term  */
  YYSYMBOL_unaryexpression = 69,           /* unaryexpression  */
  YYSYMBOL_factor = 70,                    /* factor  */
  YYSYMBOL_immutable = 71,                 /* immutable  */
  YYSYMBOL_mutable = 72,                   /* mutable  */
  YYSYMBOL_call = 73,                      /* call  */
  YYSYMBOL_args = 74,                      /* args  */
  YYSYMBOL_arglist = 75,                   /* arglist  */
  YYSYMBOL_statementlist = 76,             /* statementlist  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_funccallstmt = 78,              /* funccallstmt  */
  YYSYMBOL_returnstmt = 79,                /* returnstmt  */
  YYSYMBOL_breakstmt = 80,                 /* breakstmt  */
  YYSYMBOL_continuestmt = 81,              /* continuestmt  */
  YYSYMBOL_selectionstmt = 82,             /* selectionstmt  */
  YYSYMBOL_labeledstmt = 83,               /* labeledstmt  */
  YYSYMBOL_iterationstmt = 84,             /* iterationstmt  */
  YYSYMBOL_expressionstmt = 85,            /* expressionstmt  */
  YYSYMBOL_outputstatement = 86,           /* outputstatement  */
  YYSYMBOL_outvariable = 87,               /* outvariable  */
  YYSYMBOL_value = 88,                     /* value  */
  YYSYMBOL_inputstatement = 89,            /* inputstatement  */
  YYSYMBOL_input_value = 90                /* input_value  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
       2,     2,     2,     2,     2,     2,    46,    45,     2,     2,
      47,    48,    43,    40,    50,    41,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    77,    78,    81,    82,    85,    86,    91,
      94,    97,    98,   103,   104,   107,   108,   111,   112,   113,
     114,   117,   118,   121,   122,   125,   126,   130,   131,   134,
     170,   173,   182,   185,   194,   197,   198,   201,   202,   205,
     208,   209,   210,   211,   212,   213,   214,   217,   220,   221,
     224,   225,   228,   229,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   244,   247,   248,   251,   254,   257,
     258,   259,   260,   263,   264,   265,   268,   272,   273,   276,
     279,   280,   281,   284,   288,   291,   292
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "CONSTANT",
  "FUNC", "POWER", "CHAR_CONSTANT", "SET", "REAL", "CHAR", "STRING",
  "BOOLEAN", "LOOP", "IF", "ELSE", "ELIF", "CASE", "DECLARE", "BREAK",
  "RETURN", "CONTINUE", "DEFAULT", "TRUE_", "FALSE_", "RELOP", "OR_RELOP",
  "AND_RELOP", "NOT_RELOP", "MULOP", "UNARYOP", "START", "END", "SWITCH",
  "NUMBER", "OUTPUT", "INPUT", "SUMOP", "COMMENT", "MAIN", "'+'", "'-'",
  "'^'", "'*'", "'/'", "'%'", "'$'", "'('", "')'", "';'", "','", "$accept",
  "program", "declarationlist", "main", "declaration",
  "function_definition", "variable_declaration", "init_dec", "params",
  "paramlist", "datatype", "expression", "simpleexpression",
  "andexpression", "unaryrelexpression", "relexpression", "sumexpression",
  "term", "unaryexpression", "factor", "immutable", "mutable", "call",
  "args", "arglist", "statementlist", "statement", "funccallstmt",
  "returnstmt", "breakstmt", "continuestmt", "selectionstmt",
  "labeledstmt", "iterationstmt", "expressionstmt", "outputstatement",
  "outvariable", "value", "inputstatement", "input_value", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-56)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-43)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   107,   107,    10,    -5,     6,   -56,   -56,   -56,   -56,
     -56,   -56,    17,    36,   -56,   -31,   -56,   -56,    -2,   128,
       3,     9,   107,     0,   -56,   -56,   -56,   -56,   128,   -56,
     156,    74,    28,    30,   -56,    34,    24,    33,   -56,   -56,
     -56,   -56,   -56,   -56,    68,    29,    32,    41,    26,    66,
      31,    45,    46,    48,   -56,    43,    28,    53,     9,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    59,
      62,   117,    74,   -56,   -56,   119,    81,   128,   128,   156,
     156,   156,   102,   128,   128,   128,   -56,   -56,    84,   -56,
       9,   128,   120,   -56,   -56,   -56,    88,   107,   -56,   -56,
      89,    90,   128,   -56,    30,   -56,    24,    33,   -56,    95,
      28,   145,   -12,    -8,    -7,   -56,    99,     1,     0,   -56,
     -42,   -56,     9,   143,   -56,    74,   146,   101,   109,   112,
     -56,   115,   -56,   150,   118,   -56,   -56,   -56,   121,     9,
       9,     9,     9,   -56,   -56,   -56,   124,   122,   130,   131,
     132,   -56,   -56,    35,   -13,   -56,   135,   136,   -56,     9,
     128,   138,    12,   -56,   139,     9,   140,   151,   141,     9,
     142,   -56
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     6,     4,     7,     8,    17,    18,
      19,    20,     0,     0,     1,     0,     2,     3,     0,    12,
       0,     0,    14,    39,    41,    44,    45,    46,     0,    43,
       0,     0,    11,    24,    26,    28,    30,    32,    34,    36,
      37,    38,    42,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,    22,     0,    53,    63,
      56,    57,    58,    59,    60,    55,    54,    61,    62,     0,
      13,     0,    49,    27,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    65,     0,    68,
       0,     0,     0,    77,     5,    52,     0,     0,    15,    51,
       0,    48,     0,    40,    23,    25,    29,    31,    33,     0,
      21,    64,     0,     0,     0,    66,     0,     0,    39,    82,
       0,    81,     0,     0,    47,     0,    86,     0,     0,     0,
      74,     0,    79,     0,     0,    16,    50,    85,     0,     0,
       0,     0,     0,    83,    80,     9,     0,     0,     0,     0,
       0,    84,    76,    69,    75,    72,     0,     0,    73,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   184,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
      -1,   -24,   -19,   114,   -23,   -56,   113,   116,   -28,   -56,
     -56,   -56,   123,   -56,   -56,   -55,   -56,   -56,   -56,   -56,
     -56,   -56,    44,   -56,   -56,   -56,   -56,    64,   -56,   -56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    16,     5,     6,     7,    20,    69,    70,
      12,    55,    56,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   100,   101,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,   120,   121,    68,   138
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    13,    74,    95,    47,    73,   132,    76,   133,    51,
      14,     1,    23,    24,    77,    21,    25,    44,    77,    77,
      18,    71,    45,    46,     2,    88,    47,    77,    48,    49,
      50,    51,    26,    27,    15,   116,   127,    28,    77,    19,
     128,   129,    52,    29,    53,    22,    30,    72,    99,   131,
     156,   157,    43,   108,    77,   105,    31,    78,    54,    79,
     164,    80,    81,   110,   112,   113,   114,   134,   119,    23,
      24,    82,   117,    25,    75,    86,    83,    23,    24,    84,
      89,    25,    75,   110,   147,   148,   149,   150,    85,    26,
      27,    90,    93,    91,    28,    92,   123,    26,    27,    94,
      29,   136,    28,    30,   161,    23,    24,    96,    29,    25,
     166,    30,    97,    31,   170,    87,     8,     9,    10,    11,
      98,    31,   102,   118,    24,    26,    27,    25,    75,   103,
      28,    23,    24,   115,   122,    25,    29,   124,   109,    30,
     125,   162,   126,    26,    27,   130,   135,   139,    28,    31,
     137,    26,    27,   143,    29,   140,    28,    30,   141,    23,
      24,   142,    29,    25,   145,    30,   168,    31,   152,   146,
     -42,   -42,   -42,   151,   -42,    31,   153,   154,   155,    26,
      27,   159,   -42,   160,   163,   165,   167,   169,   171,    17,
      29,   104,   106,    30,   -42,     0,   107,   144,   158,     0,
       0,     0,     0,    31,     0,   111
};

static const yytype_int16 yycheck[] =
{
      19,     2,    30,    58,    17,    28,    48,    31,    50,    22,
       0,     5,     3,     4,    26,    46,     7,     8,    26,    26,
       3,    22,    13,    14,    18,    49,    17,    26,    19,    20,
      21,    22,    23,    24,    39,    90,    48,    28,    26,     3,
      48,    48,    33,    34,    35,    47,    37,    47,    72,    48,
      15,    16,    49,    81,    26,    78,    47,    27,    49,    25,
      48,    37,    29,    82,    83,    84,    85,   122,    92,     3,
       4,     3,    91,     7,     8,    49,    47,     3,     4,    47,
      49,     7,     8,   102,   139,   140,   141,   142,    47,    23,
      24,    46,    49,    47,    28,    47,    97,    23,    24,    46,
      34,   125,    28,    37,   159,     3,     4,    48,    34,     7,
     165,    37,    50,    47,   169,    49,     9,    10,    11,    12,
       3,    47,     3,     3,     4,    23,    24,     7,     8,    48,
      28,     3,     4,    49,    46,     7,    34,    48,    36,    37,
      50,   160,    47,    23,    24,    46,     3,    46,    28,    47,
       4,    23,    24,     3,    34,    46,    28,    37,    46,     3,
       4,    46,    34,     7,    46,    37,    15,    47,    46,    48,
      25,    26,    27,    49,    29,    47,    46,    46,    46,    23,
      24,    46,    37,    47,    46,    46,    46,    46,    46,     5,
      34,    77,    79,    37,    49,    -1,    80,   133,   154,    -1,
      -1,    -1,    -1,    47,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    18,    52,    53,    55,    56,    57,     9,    10,
      11,    12,    61,    61,     0,    39,    54,    53,     3,     3,
      58,    46,    47,     3,     4,     7,    23,    24,    28,    34,
      37,    47,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    49,     8,    13,    14,    17,    19,    20,
      21,    22,    33,    35,    49,    62,    63,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    59,
      60,    61,    47,    65,    69,     8,    62,    26,    27,    25,
      37,    29,     3,    47,    47,    47,    49,    49,    62,    49,
      46,    47,    47,    49,    46,    76,    48,    50,     3,    62,
      74,    75,     3,    48,    64,    65,    67,    68,    69,    36,
      63,    73,    63,    63,    63,    49,    76,    63,     3,    62,
      87,    88,    46,    61,    48,    50,    47,    48,    48,    48,
      46,    48,    48,    50,    76,     3,    62,     4,    90,    46,
      46,    46,    46,     3,    88,    46,    48,    76,    76,    76,
      76,    49,    46,    46,    46,    46,    15,    16,    83,    46,
      47,    76,    63,    46,    48,    46,    76,    46,    15,    46,
      76,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    55,    55,    56,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      72,    72,    72,    72,    72,    72,    72,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    79,    79,    80,    81,    82,
      82,    82,    82,    83,    83,    83,    84,    85,    85,    86,
      87,    87,    87,    88,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     4,     0,     1,     1,     9,
       4,     2,     1,     1,     0,     2,     4,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     2,     2,     7,
      11,    18,     7,     8,     4,     7,     7,     2,     1,     4,
       3,     1,     1,     1,     7,     1,     0
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
  case 8: /* declaration: variable_declaration  */
#line 87 "gptprogram.y"
        { addChild(program, yyvsp[0]); }
#line 1413 "y.tab.c"
    break;

  case 24: /* simpleexpression: andexpression  */
#line 122 "gptprogram.y"
                               {yyval=yyvsp[0];}
#line 1419 "y.tab.c"
    break;

  case 26: /* andexpression: unaryrelexpression  */
#line 126 "gptprogram.y"
                            {yyval=yyvsp[0];}
#line 1425 "y.tab.c"
    break;

  case 28: /* unaryrelexpression: relexpression  */
#line 131 "gptprogram.y"
                        {yyval=yyvsp[0];}
#line 1431 "y.tab.c"
    break;

  case 29: /* relexpression: relexpression RELOP sumexpression  */
#line 134 "gptprogram.y"
                                                     {  if(yyvsp[-1] == 4)
                               {
                               if(yyvsp[-2] != yyvsp[0])
                                yyval = true;
                               }

                            else if(yyvsp[-1] == 5)
                               {
                               if(yyvsp[-2] >= yyvsp[0])
                                yyval = true;
                               }

                             else if(yyvsp[-1] == 6)
                               {
                               if(yyvsp[-2] <= yyvsp[0])
                                yyval = true;
                              }

                             else if(yyvsp[-1] == 7)
                               {
                               if(yyvsp[-2] > yyvsp[0])
                                yyval = true;
                               }

                             else if(yyvsp[-1] == 8)
                               {
                               if(yyvsp[-2] < yyvsp[0])
                                yyval = true;
                               }
    
                             else if(yyvsp[-1] == 9)
                               {
                               if(yyvsp[-2] == yyvsp[0])
                                yyval = true;
                               }
                            }
#line 1472 "y.tab.c"
    break;

  case 30: /* relexpression: sumexpression  */
#line 170 "gptprogram.y"
                        {yyval=yyvsp[0];}
#line 1478 "y.tab.c"
    break;

  case 31: /* sumexpression: sumexpression SUMOP term  */
#line 173 "gptprogram.y"
                                           {if(yyvsp[-1] == 21)
                            {yyval = yyvsp[-2] + yyvsp[0];}

                            else if(yyvsp[-1] == 22)
                            {yyval = yyvsp[-2] - yyvsp[0];}
                            else if(yyvsp[-1] == 23)
                            {yyval = yyvsp[-2] ^ yyvsp[0];}
                            
                         }
#line 1492 "y.tab.c"
    break;

  case 32: /* sumexpression: term  */
#line 182 "gptprogram.y"
                            {yyval=yyvsp[0];}
#line 1498 "y.tab.c"
    break;

  case 33: /* term: term MULOP unaryexpression  */
#line 185 "gptprogram.y"
                                      {if(yyvsp[-1] == 31)
                            {yyval = yyvsp[-2] * yyvsp[0];}

                          else if(yyvsp[-1] == 32)
                            {yyval = yyvsp[-2] / yyvsp[0];}

                          else if(yyvsp[-1] == 33)
                            {yyval = yyvsp[-2] % yyvsp[0];}
                             }
#line 1512 "y.tab.c"
    break;

  case 34: /* term: unaryexpression  */
#line 194 "gptprogram.y"
                               {yyval=yyvsp[0];}
#line 1518 "y.tab.c"
    break;

  case 35: /* unaryexpression: SUMOP unaryexpression  */
#line 197 "gptprogram.y"
                                         {if(yyvsp[-1]==22)    yyval=(-1)*yyvsp[0];}
#line 1524 "y.tab.c"
    break;

  case 36: /* unaryexpression: factor  */
#line 198 "gptprogram.y"
                            {yyval=yyvsp[0];}
#line 1530 "y.tab.c"
    break;

  case 37: /* factor: immutable  */
#line 201 "gptprogram.y"
                        {yyval=yyvsp[0];}
#line 1536 "y.tab.c"
    break;

  case 38: /* factor: mutable  */
#line 202 "gptprogram.y"
                 {yyval=yyvsp[0];}
#line 1542 "y.tab.c"
    break;

  case 39: /* immutable: ID  */
#line 205 "gptprogram.y"
                      {yyval=intArr[yyvsp[0]];}
#line 1548 "y.tab.c"
    break;

  case 40: /* mutable: '(' expression ')'  */
#line 208 "gptprogram.y"
                                {yyval=yyvsp[-1];}
#line 1554 "y.tab.c"
    break;

  case 41: /* mutable: CONSTANT  */
#line 209 "gptprogram.y"
                    {yyval=yyvsp[0];}
#line 1560 "y.tab.c"
    break;

  case 43: /* mutable: NUMBER  */
#line 211 "gptprogram.y"
                        {yyval=yyvsp[0];}
#line 1566 "y.tab.c"
    break;

  case 44: /* mutable: CHAR_CONSTANT  */
#line 212 "gptprogram.y"
                        {yyval=yyvsp[0];}
#line 1572 "y.tab.c"
    break;

  case 45: /* mutable: TRUE_  */
#line 213 "gptprogram.y"
                       {yyval = yyvsp[0];}
#line 1578 "y.tab.c"
    break;

  case 46: /* mutable: FALSE_  */
#line 214 "gptprogram.y"
                    {yyval =yyvsp[0];}
#line 1584 "y.tab.c"
    break;

  case 47: /* call: ID '(' args ')'  */
#line 217 "gptprogram.y"
                        {}
#line 1590 "y.tab.c"
    break;

  case 56: /* statement: returnstmt  */
#line 234 "gptprogram.y"
                         {yyval = yyvsp[0];}
#line 1596 "y.tab.c"
    break;

  case 57: /* statement: breakstmt  */
#line 235 "gptprogram.y"
                         {yyval = yyvsp[0];}
#line 1602 "y.tab.c"
    break;

  case 58: /* statement: continuestmt  */
#line 236 "gptprogram.y"
                         {yyval = yyvsp[0];}
#line 1608 "y.tab.c"
    break;

  case 61: /* statement: outputstatement  */
#line 239 "gptprogram.y"
                           {yyval = yyvsp[0];}
#line 1614 "y.tab.c"
    break;

  case 62: /* statement: inputstatement  */
#line 240 "gptprogram.y"
                           {yyval = yyvsp[0];}
#line 1620 "y.tab.c"
    break;

  case 63: /* statement: funccallstmt  */
#line 241 "gptprogram.y"
                        {yyval = yyvsp[0];}
#line 1626 "y.tab.c"
    break;

  case 77: /* expressionstmt: expression ';'  */
#line 272 "gptprogram.y"
                                  {yyval = yyvsp[-1] ;}
#line 1632 "y.tab.c"
    break;

  case 81: /* outvariable: value  */
#line 280 "gptprogram.y"
                  {yyval=yyvsp[0];}
#line 1638 "y.tab.c"
    break;

  case 82: /* outvariable: expression  */
#line 281 "gptprogram.y"
                     {yyval=yyvsp[0];}
#line 1644 "y.tab.c"
    break;

  case 83: /* value: ID  */
#line 284 "gptprogram.y"
                    {yyval=yyvsp[0];}
#line 1650 "y.tab.c"
    break;

  case 85: /* input_value: CONSTANT  */
#line 291 "gptprogram.y"
                       {yyval = yyvsp[0];}
#line 1656 "y.tab.c"
    break;


#line 1660 "y.tab.c"

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

#line 295 "gptprogram.y"


void yyerror(char *msg)
{
    printf("xxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("invalid string \n");
    printf("xxxxxxxxxxxxxxxxxxxxxxx\n");
    fprintf(stderr, "%s in line %d \n %s", msg, yylineno);
    flag = true;

    exit(0);
}

int main()
{
    FILE *fp;
    fp = fopen("example.txt", "r");
    yyin = fp;
    yydebug = 1;
    yyparse();
    if (flag == false)
    {
        printf("------------------------------\n");
        printf("Code parsed successfully!!!\n");
        printf("------------------------------\n");
        // Print the parse tree
        printf("Parse Tree:\n");
        printParseTree(program, 0);
        printf("------------------------------\n");
    }
    return 0;
}




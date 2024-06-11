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

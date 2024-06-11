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


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

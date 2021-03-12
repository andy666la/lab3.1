/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
    IDENT = 258,                   /* IDENT  */
    NUMBER = 259,                  /* NUMBER  */
    FUNCTION = 260,                /* FUNCTION  */
    BEGIN_PARAMS = 261,            /* BEGIN_PARAMS  */
    END_PARAMS = 262,              /* END_PARAMS  */
    BEGIN_LOCALS = 263,            /* BEGIN_LOCALS  */
    END_LOCALS = 264,              /* END_LOCALS  */
    BEGIN_BODY = 265,              /* BEGIN_BODY  */
    END_BODY = 266,                /* END_BODY  */
    INTEGER = 267,                 /* INTEGER  */
    ARRAY = 268,                   /* ARRAY  */
    OF = 269,                      /* OF  */
    IF = 270,                      /* IF  */
    THEN = 271,                    /* THEN  */
    ENDIF = 272,                   /* ENDIF  */
    ELSE = 273,                    /* ELSE  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    FOREACH = 276,                 /* FOREACH  */
    IN = 277,                      /* IN  */
    BEGINLOOP = 278,               /* BEGINLOOP  */
    ENDLOOP = 279,                 /* ENDLOOP  */
    CONTINUE = 280,                /* CONTINUE  */
    READ = 281,                    /* READ  */
    WRITE = 282,                   /* WRITE  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    NOT = 285,                     /* NOT  */
    TRUE = 286,                    /* TRUE  */
    FALSE = 287,                   /* FALSE  */
    RETURN = 288,                  /* RETURN  */
    SUB = 289,                     /* SUB  */
    ADD = 290,                     /* ADD  */
    MULT = 291,                    /* MULT  */
    DIV = 292,                     /* DIV  */
    MOD = 293,                     /* MOD  */
    EQ = 294,                      /* EQ  */
    NEQ = 295,                     /* NEQ  */
    LT = 296,                      /* LT  */
    GT = 297,                      /* GT  */
    LTE = 298,                     /* LTE  */
    GTE = 299,                     /* GTE  */
    L_PAREN = 300,                 /* L_PAREN  */
    R_PAREN = 301,                 /* R_PAREN  */
    L_SQUARE_BRACKET = 302,        /* L_SQUARE_BRACKET  */
    R_SQUARE_BRACKET = 303,        /* R_SQUARE_BRACKET  */
    COLON = 304,                   /* COLON  */
    SEMICOLON = 305,               /* SEMICOLON  */
    COMMA = 306,                   /* COMMA  */
    ASSIGN = 307                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "mini_1.y"

  char* ident_val;
  int num_val;
  struct E {
    char* place;
    char* code;
    bool array;
  } expr;

  struct S {
    char* code;
  } stat;
 

#line 131 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

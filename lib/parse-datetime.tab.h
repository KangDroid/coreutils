/* A Bison parser, made by GNU Bison 3.7.2.  */

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
    tAGO = 258,                    /* tAGO  */
    tDST = 259,                    /* tDST  */
    tYEAR_UNIT = 260,              /* tYEAR_UNIT  */
    tMONTH_UNIT = 261,             /* tMONTH_UNIT  */
    tHOUR_UNIT = 262,              /* tHOUR_UNIT  */
    tMINUTE_UNIT = 263,            /* tMINUTE_UNIT  */
    tSEC_UNIT = 264,               /* tSEC_UNIT  */
    tDAY_UNIT = 265,               /* tDAY_UNIT  */
    tDAY_SHIFT = 266,              /* tDAY_SHIFT  */
    tDAY = 267,                    /* tDAY  */
    tDAYZONE = 268,                /* tDAYZONE  */
    tLOCAL_ZONE = 269,             /* tLOCAL_ZONE  */
    tMERIDIAN = 270,               /* tMERIDIAN  */
    tMONTH = 271,                  /* tMONTH  */
    tORDINAL = 272,                /* tORDINAL  */
    tZONE = 273,                   /* tZONE  */
    tSNUMBER = 274,                /* tSNUMBER  */
    tUNUMBER = 275,                /* tUNUMBER  */
    tSDECIMAL_NUMBER = 276,        /* tSDECIMAL_NUMBER  */
    tUDECIMAL_NUMBER = 277         /* tUDECIMAL_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define tAGO 258
#define tDST 259
#define tYEAR_UNIT 260
#define tMONTH_UNIT 261
#define tHOUR_UNIT 262
#define tMINUTE_UNIT 263
#define tSEC_UNIT 264
#define tDAY_UNIT 265
#define tDAY_SHIFT 266
#define tDAY 267
#define tDAYZONE 268
#define tLOCAL_ZONE 269
#define tMERIDIAN 270
#define tMONTH 271
#define tORDINAL 272
#define tZONE 273
#define tSNUMBER 274
#define tUNUMBER 275
#define tSDECIMAL_NUMBER 276
#define tUDECIMAL_NUMBER 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 564 "parse-datetime.y"

  intmax_t intval;
  textint textintval;
  struct timespec timespec;
  relative_time rel;

#line 117 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (parser_control *pc);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

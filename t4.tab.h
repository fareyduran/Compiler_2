/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PARENI = 258,
     PAREND = 259,
     SUMA = 260,
     RESTA = 261,
     MULTI = 262,
     DIVIDE = 263,
     MAYORQ = 264,
     MENORQ = 265,
     IGUAL = 266,
     PTOYCOMA = 267,
     THEN = 268,
     DO = 269,
     BEG = 270,
     END = 271,
     UNTIL = 272,
     NUMENT = 273,
     NUMF = 274,
     INT = 275,
     FLOAT = 276,
     ASIGNACION = 277,
     IF = 278,
     WHILE = 279,
     REPEAT = 280,
     PRINT = 281,
     READ = 282,
     ID = 283
   };
#endif
/* Tokens.  */
#define PARENI 258
#define PAREND 259
#define SUMA 260
#define RESTA 261
#define MULTI 262
#define DIVIDE 263
#define MAYORQ 264
#define MENORQ 265
#define IGUAL 266
#define PTOYCOMA 267
#define THEN 268
#define DO 269
#define BEG 270
#define END 271
#define UNTIL 272
#define NUMENT 273
#define NUMF 274
#define INT 275
#define FLOAT 276
#define ASIGNACION 277
#define IF 278
#define WHILE 279
#define REPEAT 280
#define PRINT 281
#define READ 282
#define ID 283




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 28 "t4.y"
{
	int entero;
	float flotante;
	char *str;
   	struct Arbol *abb;
}
/* Line 1529 of yacc.c.  */
#line 112 "t4.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


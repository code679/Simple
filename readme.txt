"Compiler"
Define a simple language-- 's' and design a "s"-compiler

Tools: flex, bison, gcc, vi, gdb
Version Control : git

Project Description:
The main of this project is to simulate a programming language and compilation process.
- Define a simple language
-

Major files:

Simple.y - compiler for simple language
Simple.lex - Scanner for simple language
SM.h - Stack Machine
ST.h - Symbol table
test_simple - sample program written in 's' language

How to execute the project?
$ bison -dv Simple.y
	generates 3 files
	- Simple.output
	- Simple.tab.h
	- Simple.tab.c

$flex Simple.lex
	generates lex.yy.c
$gcc -c Simple.tab.c 2> error112.log

      o/p: Simple.tab.o

$gcc -c lex.yy.c 2> error_lex_yy_c.log

			o/p: 

$gcc -o sc Simple.tab.o lex.yy.o -lm  //sc is the name given to our compiler

$sc test_simple


How to compile test_simple?

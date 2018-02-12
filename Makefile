all : compile

run-all: compile
	figlet "C"; ./c/fizzbuzz 3 5 10

compile : c-lang

c-lang:
	gcc -Wall c/fizzbuzz.c -o c/fizzbuzz

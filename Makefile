all:
	gcc -g3 ex01/*.c -o ex01/ex01
	gcc -g3 ex02/*.c -o ex02/ex02
	gcc -g3 ex03/*.c -o ex03/ex03
	gcc -g3 ex04/*.c -o ex04/ex04
	gcc -g3 ex05/*.c -o ex05/ex05
	gcc -g3 ex06/*.c -o ex06/ex06

fclean:
	rm -f ex01/ex01
	rm -f ex02/ex02
	rm -f ex03/ex03
	rm -f ex04/ex04
	rm -f ex05/ex05
	rm -f ex06/ex06

re:	fclean all
ArbolTest: ArbolTest.o arbol.o
	gcc -o ArbolTest ArbolTest.o arbol.o
	

ArbolTest.o: ArbolTest.c arbol.h
	gcc -c -o ArbolTest.o ArbolTest.c

arbol.o: arbol.h arbol.c
	gcc -c -o arbol.o arbol.c

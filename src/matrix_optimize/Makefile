result:main matrix 
	gcc main.o matrix.o -o result

main: main_clean main.c
	gcc -c -O0 main.c
main_optimize: main_clean main.c
	gcc -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi
	


matrix: matrix_clean matrix.c
	gcc -c -O0 matrix.c
matrix_optimize: matrix_clean matrix.c
	gcc -c -O2 matrix.c
matrix_clean:
	if [ -e matrix.o ] ; then rm matrix.o ; fi
	

release: main_optimize matrix_optimize
	gcc main.o matrix.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o


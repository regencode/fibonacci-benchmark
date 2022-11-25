main:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out main_test.c mylib.o
	./main.out

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o time_iter.out main_b_time_iterative.c mylib.o
	gcc -o time_recur.out main_b_time_recursive.c mylib.o
	./time_iter.out
	./time_recur.out

timei:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o time_iter.out main_b_time_iterative.c mylib.o
	./time_iter.out

timer:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o time_recur.out main_b_time_recursive.c mylib.o
	./time_recur.out

spacei:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o space_iter.out main_b_space_iter.c mylib.o
	./space_iter.out

spacer:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o space_recur.out main_b_space_recur.c mylib.o
	./space_recur.out

clear:
	rm -rf *.out
	rm -rf *.o
	rm -rf *.exe
	rm -rf *.dat

mylib.o:
	gcc -o mylib.o -c mylib/fib.c


all: mylib.o
	gcc -o main.out main.c mylib.o





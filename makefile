all:test find_pid
find_pid:find_pid.o
	cc -o find_pid find_pid.o
find_pid.o:find_pid.c
	cc -c find_pid.c
test:test.o
	cc test.o -o test
test.o:test.c student_info.h
	cc -c test.c -o test.o
clean:
	rm -f find_pid.o test test.o

all:mjy find_mjy
find_mjy:find_mjy.o
	cc -o find_mjy find_mjy.o
find_mjy.o:find_mjy.c
	cc -c find_mjy.c
mjy:mjy.o
	cc mjy.o -o mjy
mjy.o:mjy.c student_info.h
	cc -c mjy.c -o mjy.o
clean:
	rm -f find_mjy.o mjy mjy.o

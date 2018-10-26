all: menu
menu: index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o menu.o
	gcc menu.o index_first_zero.o  index_last_zero.o sum_between.o sum_before_and_after.o -o menu
menu.o: menu.c
	gcc -c menu.c
index_firs_zero.o: index_first_zero.c
	gcc -c index_first_zero.c
index_last_zero.o: index_last_zero.c
	gcc -c index_last_zero.c
sum_between.o: sum_between.c index_first_zero.c index_last_zero.c
	gcc -c sum_between.c index_first_zero.c index_last_zero.c
sum_before_and_after.o: sum_before_and_after.c index_first_zero.c index_last_zero.c
	gcc -c sum_before_and_after.c index_first_zero.c index_last_zero.c

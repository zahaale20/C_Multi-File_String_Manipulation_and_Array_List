CC = gcc
CFLAGS = -Wall -std=c99 -pedantic
MAIN = task2_tests
OBJS = task2_tests.o task2.o

all : $(MAIN)

$(MAIN) : $(OBJS) task2.h
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

task2_tests.o : task2_tests.c task2.h
	$(CC) $(CFLAGS) -c task2_tests.c

task2.o : task2.c task2.h
	$(CC) $(CFLAGS) -c task2.c

clean :
	rm *.o $(MAIN) core

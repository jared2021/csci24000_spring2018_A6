#Honor Pledge:
#
#I pledge that I have neither given nor 
#received any help on this assignment
#
#jascho
all:driver

driver:InsertionSort.o BubbleSort.o Driver.cpp
	g++ InsertionSort.o BubbleSort.o -o driver

InsertionSort.o: InsertionSort.cpp InsertionSort.h
	g++ -c InsertionSort.cpp

BubbleSort.o: BubbleSort.cpp BubbleSort.h
	g++ -c BubbleSort.cpp

clean:
	rm *.o

run:
	./driver

valgrind:
	valgrind --leak-check=full --log-file=valgrind.txt ./driver

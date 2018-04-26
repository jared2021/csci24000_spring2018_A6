#Honor Pledge:
#
#I pledge that I have neither given nor 
#received any help on this assignment
#
#jascho
all:Driver

Driver:InsertionSort.o BubbleSort.o Driver.cpp
	g++ InsertionSort.o BubbleSort.o Driver.cpp -o Driver

InsertionSort.o: InsertionSort.cpp InsertionSort.h 
	g++ -c InsertionSort.cpp -o InsertionSort.o

BubbleSort.o: BubbleSort.cpp BubbleSort.h
	g++ -c BubbleSort.cpp -o BubbleSort.o

clean:
	rm -f BubbleSort.o InsertionSort.o Driver

run:
	./Driver

valgrind:
	valgrind --leak-check=full --log-file=valgrind.txt ./driver

#Honor Pledge:
#
#I pledge that I have neither given nor 
#received any help on this assignment
#
#jascho
all:Driver

Driver:InsertionSort.o BubbleSort.o Driver.cpp
	g++ InsertionSort.o BubbleSort.o -o Driver

InsertionSort.o: InsertionSort.cpp 
	g++ -c InsertionSort.cpp -o InsertionSort.o

BubbleSort.o: BubbleSort.cpp 
	g++ -c BubbleSort.cpp -o BubbleSort.o

clean:
	rm -f BubbleSort.o InsertionSort.o Driver

run:
	./driver

valgrind:
	valgrind --leak-check=full --log-file=valgrind.txt ./driver

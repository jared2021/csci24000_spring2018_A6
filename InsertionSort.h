//Honor Pledge:
//
//I pledge that I have given nor 
//received any help on this assignment
//
//jascho

#ifndef InsertionSort_H
#define InsertionSort_H

#include "Sort.h"

class InsertionSort : public Sort
{
	private:
		//variable to hold one of the numbers in the array if they need to swap numbers
		int temp;
	public:

		InsertionSort();

		~InsertionSort();

		virtual void Sorting(int* array);
		virtual void Print(int* array);
};

#endif

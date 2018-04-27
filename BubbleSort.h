//Honor Pledge:
//
//I pledge that I have given nor
//received any help on this assignment
//
//jascho

#ifndef BubbleSort_H
#define BubbleSort_H

#include "Sort.h"

class BubbleSort : public Sort
{
	private:
		//variable to hold a number when swapping two numbers
		int temp;
	public:
		BubbleSort();

		~BubbleSort();

		virtual void Sorting(int* array);
		virtual void Print(int* array);
};

#endif

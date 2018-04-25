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
		int compare;
		int next;
		int sublist;
		int list[50];
		int temp;
	public:

		InsertionSort();
		InsertionSort(int array[]);

		~InsertionSort();

		virtual void Sorting();
		virtual int Print();
};

#endif

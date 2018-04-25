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
		int compare;
		int next;
		int end;
		int list[50];
		int temp;
	public:
		BubbleSort();
		BubbleSort(int array[]);

		~BubbleSort();

		virtual void Sorting();
		virtual int Print();
};

#endif

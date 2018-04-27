//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment
//
//jascho

#include "InsertionSort.h"
#include <iostream>

InsertionSort::InsertionSort()
{
	compare=1;
	next=2;
	sublist=0;
	temp=0;
}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::Sorting(int* array)
{
	if(array[0]<array[1])
	{
		temp=array[0];
		array[0]=array[1];
		array[1]=temp;
	}
	while(compare!=50)
	{
		std::cout << compare << '\n';
		if(array[compare]<array[next])
		{
			temp=array[compare];
			array[compare]=array[next];
			array[next]=temp;
			while (sublist!=-1)
			{
				if(array[sublist]<array[compare])
				{
					temp=array[sublist];
					array[compare]=array[sublist];
					array[next]=temp;
					sublist=sublist-1;
					compare=compare-1;
				}
			}
		}
		compare=next;
		next=next+1;
		sublist=compare-1;
	}
	Print(array);
}
void InsertionSort::Print(int* array)
{
	for(int i=0; i<50;++i)
	{
		std::cout<<array[i]<<'\n';
	}
}

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

}

InsertionSort::InsertionSort(int array[])
{
	list[50]=array[50];
	compare=1;
	next=2;
	sublist=0;
	temp=0;
}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::Sorting()
{
	if(list[0]<list[1])
	{
		temp=list[0];
		list[0]=list[1];
		list[1]=temp;
	}
	while(compare!=50)
	{
		if(list[compare]<list[next])
		{
			temp=list[compare];
			list[compare]=list[next];
			list[next]=temp;
			while (sublist!=-1)
			{
				if(list[sublist]<list[compare])
				{
					temp=list[sublist];
					list[compare]=list[sublist];
					list[next]=temp;
					sublist=sublist-1;
					compare=compare-1;
				}
			}
		}
		compare=next;
		next=next+1;
		sublist=compare-1;
	}
}
int InsertionSort::Print()
{
	return list[50];
}

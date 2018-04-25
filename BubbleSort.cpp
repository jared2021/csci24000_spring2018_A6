//Honor Pledge:
//
//I pledge that I have neither given nor 
//received any help on this assignment
//
//jascho

#include "BubbleSort.h"
#include <iostream>

BubbleSort::BubbleSort()
{
	
}

BubbleSort::BubbleSort(int array[])
{
	list[50]=array[50];
	compare=0;
	next=1;
	end=50;
	temp=0;
}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::Sorting()
{
	while(end!=0)
	{
		while(next!=end)
		{
			if(list[compare]<list[next])
			{
				temp=list[compare];
				list[compare]=list[next];
				list[next]=temp;
				compare=compare+1;
				next=next+1;
			}
		}
		end=end-1;
		compare=0;
		next=1;
	}
}
int BubbleSort::Print()
{
	return list[50];
}

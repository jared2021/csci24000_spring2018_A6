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
	compare=0;
	next=1;
	end=50;
	temp=0;
}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::Sorting(int* array)
{
	while(end!=0)
	{
		while(next!=end)
		{
			if(array[compare]<array[next])
			{
				std::cout<<"Comparing numbers";
				temp=array[compare];
				array[compare]=array[next];
				array[next]=temp;
				compare=compare+1;
				next=next+1;
			}
		}
		end=end-1;
		compare=0;
		next=1;
	}
	Print(array);
}
void BubbleSort::Print(int* array)
{
	for(int i=0;i<50;++i)
	{
		std::cout<<array[i];
	}
	std::cout << std::endl;
}

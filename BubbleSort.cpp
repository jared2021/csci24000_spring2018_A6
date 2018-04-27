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
	temp=0;
}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::Sorting(int* array)
{
	//variable to make sure it checks every number in the array
	int run=0;
	//checks to see if two numbers need to be swapped
	while(run<50)
	{
		for(int i=0;i<50;++i)
		{
			if(array[i]<array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
		//increments the variable run
		run++;
	}
	Print(array);
}
void BubbleSort::Print(int* array)
{
	//prints out each element in the array
	for(int i=0;i<50;++i)
	{
		std::cout<<array[i]<<",";
	}
	std::cout << std::endl;
}

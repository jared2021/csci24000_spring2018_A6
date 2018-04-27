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
	temp=0;
}

InsertionSort::~InsertionSort()
{
	
}

void InsertionSort::Sorting(int* array)
{
	//checking to see if the first two numbers need to be switched
	if(array[0]<array[1])
	{
		temp=array[0];
		array[0]=array[1];
		array[1]=temp;
	}
	//for loop to check each number to see if they need to be switched
	for(int i=1;i<50;i++)
	{
		if(array[i]<array[i+1])
		{
			temp=array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
			//checks to see if the number in array[i] should be swapped with another number in the sub-list
			for(int b=i;b>0;b--)
			{
				if(array[b-1]<array[b])
				{
					temp=array[b-1];
					array[b-1]=array[b];
					array[b]=temp;
				}
			}
		}
	}
		
	Print(array);
}
void InsertionSort::Print(int* array)
{
	//prints out each element of the array
	for(int i=0; i<50;++i)
	{
		std::cout<<array[i]<<",";
	}
	std::cout<<"\n";
}

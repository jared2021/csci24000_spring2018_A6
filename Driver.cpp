//Honor Pledge:
//
//I pledge that I have neither given nor
//received any help on this assignment
//
//jascho

#include "Sort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std:: string input;
std:: string number;
int* list[50];
bool keepGoing=true;
void menu()
{
	std::cout << "1) Read in file\n";
	std::cout << "2) Exit program\n";
	std::cout << "Please enter your selection.";
	std::cin >> input;
	if(input=="1")
	{
		std::ifstream File("data.txt");
		std::stringstream ss;
		if (File.is_open())
		{
			ss.clear();
			ss.str("");

			std::string line;

			while (std::getline(File,line))
			{
				ss.str(line);

				std::getline(ss,number,',');
			}
		}
	}
}
int sort()
{
	std::cout<<"1) Insertion Sort\n";
	std::cout<<"2) Bubble Sort\n";
	std::cout<<"3) Exit program\n";
	std::cout<<"Please choose a option.";
	std::cin>>input;
	if(input=="1")
	{
		InsertionSort* mySort=new InsertionSort( list[50]);
		(*mySort).Sorting();
		std::cout<<(*mySort).Print();
	}
	else if (input=="2")
	{
		BubbleSort* mySort=new BubbleSort(list[50]);
		(*mySort).Sorting();
		std::cout<<(*mySort).Print();
	}
	else if (input=="3")
	{
		std::cout<<"Exiting program.";
		keepGoing=false;
	}
}

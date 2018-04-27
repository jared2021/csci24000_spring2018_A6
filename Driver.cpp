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
int list[50];
bool keepGoing=true;
int countdown=0;
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
		std::stringstream converter;
		if (File.is_open())
		{
			ss.clear();
			ss.str("");

			std::string line;

			while (std::getline(File,line))
			{
				ss.str(line);

				while(std::getline(ss,number,','))
				{
					converter.clear();
					converter.str("");
					converter<<number;
					int temp;
					converter>>temp;
					list[countdown]=temp;
					countdown=countdown+1;
				}
			}
			for(int i = 0; i < 50; ++i)
			{
				std::cout << list[i] << " ";
			}
			std::cout << std::endl;
		}
		std::cout<<"Downloaded the file.\n";
	}
	else if(input=="2")
	{
		std::cout<<"Exiting program.\n";
		keepGoing=false;
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
		Sort* mySort=new InsertionSort();
		mySort->Sorting(list);
		delete mySort;
	}
	else if (input=="2")
	{
		std::cout<<"Creating BubbleSort";
		//Sort* mySort=new BubbleSort();
		//mySort->Sorting(list);
		//delete mySort;
	}
	else if (input=="3")
	{
		std::cout<<"Exiting program.";
		keepGoing=false;
	}
}
int main()
{
	while(keepGoing)
	{
		menu();
		if(keepGoing)
		{
			sort();
		}
	}
	return 0;
}

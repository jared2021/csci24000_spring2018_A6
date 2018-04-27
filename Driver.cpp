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

//initializing variables that I will need to read in the file
std:: string input;
std:: string number;
//array to hold the numbers I get from the file
int list[50];
//boolean variable used to stop the program
bool keepGoing=true;
void menu()
{
	//prints out a menu
	std::cout << "1) Read in file\n";
	std::cout << "2) Exit program\n";
	std::cout << "Please enter your selection.";
	std::cin >> input;
	if(input=="1")
	{
		//opens the file and creates two stringstreams to hold the string from the file and to convert those strings to integers
		std::ifstream File("data.txt");
		std::stringstream ss;
		std::stringstream converter;
		//if the file is open it makes sure the stringstream is clear and puts an empty string in it and creates a string to hold the string from the file
		if (File.is_open())
		{
			ss.clear();
			ss.str("");
			//variable to help store numbers in the list array
			int countdown=0;

			std::string line;
			//while it's reading the line from the file it will put the line in the stringstream
			while (std::getline(File,line))
			{
				ss.str(line);
				//it take the line from the file and parses the data from it by each comma and puts it in the string variable number
				while(std::getline(ss,number,','))
				{
					//checks to make sure the stringstream is clear and puts an empty string in it
					converter.clear();
					converter.str("");
					//puts the string variable into the converter to convert it into a integer and stores it in a integer variable
					converter<<number;
					int temp;
					converter>>temp;
					//puts the converted integer into the array and then increments the countdown variable so a number doesn't get overridden
					list[countdown]=temp;
					countdown=countdown+1;
				}
			}
			//prints out the array gotten from the file
			for(int i = 0; i < 50; ++i)
			{
				std::cout << list[i] << " ";
			}
			std::cout << std::endl;
		}
		//if it cannot open the file it will end the program
		else
		{
			std::cout<<"Unable to open file.\n";
			std::cout<<"Exiting program.\n";
			keepGoing=false;
		}
		//prints that it downloaded the file and closes the file
		std::cout<<"Downloaded the file.\n";
		File.close();
	}
	//exits the program
	else if(input=="2")
	{
		std::cout<<"Exiting program.\n";
		keepGoing=false;
	}
	//if the user doesn't type in a 1 or a 2 it will print out this statement and calls the menu function so it doesn't continue to the next menu
	else
	{
		std::cout<<"I don't know what you want me to do.\n";
		menu();
	}
	
}
int sort()
{
	//prints out a menu
	std::cout<<"1) Insertion Sort\n";
	std::cout<<"2) Bubble Sort\n";
	std::cout<<"3) Exit program\n";
	std::cout<<"Please choose a option.";
	std::cin>>input;
	//creates an instance of the InsertionSort class cast as Sort and passes the array to the sorting function to sort and print the array then deletes the InsertionSort class
	if(input=="1")
	{
		Sort* mySort=new InsertionSort();
		mySort->Sorting(list);
		delete mySort;
	}
	//creates an instance of the BubbleSort class cast as Sort and passes the array to the sorting function to sort and print the array then deletes the BubbleSort class
	else if (input=="2")
	{
		Sort* mySort=new BubbleSort();
		mySort->Sorting(list);
		delete mySort;
	}
	//exits the program
	else if (input=="3")
	{
		std::cout<<"Exiting program.";
		keepGoing=false;
	}
	//if the user doesn't type out a 1 or a 2 it prints this statement and calls the sort function so they don't get the previous menu again
	else
	{
		std::cout<<"I don't know what you want me to do.\n";
		sort();
	}
}
//as long as keepGoing isn't set to false the program will continue to loop
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

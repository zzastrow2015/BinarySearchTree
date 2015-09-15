/*	File Name: main.cpp
	Author: Prof. Gibbons, copied by Zach Zastrow
        KUID: 2314432
	Email Address: zast@ku.edu
	Homework Assignment Number: Lab 05
	Description: Serves as testing area for the program
	Last Changed: 13 March 2014
*/

#include <iostream>
#include "BinarySearchTree.h"

int main()
{
	//declares variables needed in main
	BinarySearchTree<int> numTree;
	int userNum=0;
	char quit='n';
	
	//prompts user to enter numbers into tree until user is done adding numbers
	while(quit != 'y')
	{
		std::cout << "Input a number to put in the tree: ";
		std::cin >> userNum;		
		numTree.add(userNum);
		std::cout << "Done adding numbers? (y/n): ";
		std::cin >> quit;		
	}	
	
	//prints tree in "pre-order"
	std::cout << "\nTree currently has the following values: " << std::endl;	
	numTree.printTree();

	//prints tree in "post-order"
	std::cout << "\nHere are sorted values: " << std::endl;	
	numTree.sortedPrint();
	std::cout << "\n\n";

	quit = 'n';

	//prompts user to search for a number in a tree.  The user can do this as many times as he/she wishes
	while(quit != 'y')
	{
		std::cout << "Input a number to search for in the tree: ";
		std::cin >> userNum;		
		//if the number is in the tree, let user know
		if( numTree.search(userNum) != nullptr )
		{
			std::cout << userNum << " is in the tree!" << std::endl;		
		}
		else
		{
			//lets user know that the number is not in the tree
			std::cout << "Sorry, " << userNum << " was not in the tree" << std::endl;
		}
		std::cout << "Done searching numbers? (y/n): ";
		std::cin >> quit;
	}

	std::cout << "\nGoodbye!" << std::endl;
	
	return(0);
}

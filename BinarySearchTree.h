/*	File Name: BinarySearchTree.h
	Author: Zach Zastrow
        KUID: 2314432
	Email Address: zast@ku.edu
	Homework Assignment Number: Lab 05
	Description: header file for BinarySearchTree class
	Last Changed: 13 March 2014
*/

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "Node.h"

template<typename T>
class BinarySearchTree{

	//private variables and methods
	private:
		Node<T>* m_root;
		void add(T value, Node<T>* subTree);
		void deleteTree(Node<T>* subTree);
		void printTree(Node<T>* subTree);
		void sortedPrint(Node<T>* subTree);
		Node<T>* search(T value, Node<T>* subTree);

	//public variables and methods
	public:
		BinarySearchTree();
		~BinarySearchTree();
		void add(T value);
		void printTree();
		void sortedPrint();
		Node<T>* search(T value);

};

#include "BinarySearchTree.hpp"

#endif

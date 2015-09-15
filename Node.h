/*	File Name: Node.h
	Author: Zach Zastrow
        KUID: 2314432
	Email Address: zast@ku.edu
	Homework Assignment Number: Lab 05
	Description: header file for Node class
	Last Changed: 13 March 2014
*/

#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{

	//public methods
	public:
		Node();
		Node<T>* getLeft();
		Node<T>* getRight();
		void setValue(T value);
		void setLeft(Node<T>* left);
		void setRight(Node<T>* right);
		T getValue();

	//private variables
	private:
		Node<T>* m_left;
		Node<T>* m_right;
		T m_value;

};

#include "Node.hpp"
#endif

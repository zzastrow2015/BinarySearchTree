/*	File Name: Node.hpp
	Author: Zach Zastrow
        KUID: 2314432
	Email Address: zast@ku.edu
	Homework Assignment Number: Lab 05
	Description: Executes methods for Node class
	Last Changed: 13 March 2014
*/

#include <iostream>

//constructor
template<typename T>
Node<T>::Node(){

	T m_value;
	m_left = nullptr;
	m_right = nullptr;
	std::cout << "Node constructor" << std::endl;
	
}

//gets value of node
template<typename T>
T Node<T>::getValue(){
	return(m_value);
}

//returns left child
template<typename T>
Node<T>* Node<T>::getLeft(){
	return(m_left);
}

//returns right child
template<typename T>
Node<T>* Node<T>::getRight(){
	return(m_right);
}

//sets node's value equal to given value
template<typename T>
void Node<T>::setValue(T value){
	m_value = value;
}

//sets left child equal to given node
template<typename T>
void Node<T>::setLeft(Node<T>* left){
	m_left = left;
}

//sets right child equal to given node
template<typename T>
void Node<T>::setRight(Node<T>* right){
	m_right = right;
}

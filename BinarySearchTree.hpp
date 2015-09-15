/*	File Name: BinarySearchTree.hpp
	Author: Zach Zastrow
        KUID: 2314432
	Email Address: zast@ku.edu
	Homework Assignment Number: Lab 05
	Description: Executes methods for the BinarySearchTree class
	Last Changed: 13 March 2014
*/

#include <iostream>

//constructor
template<typename T>
BinarySearchTree<T>::BinarySearchTree(){

	m_root = nullptr;

}

//destructor
template<typename T>
BinarySearchTree<T>::~BinarySearchTree(){

	deleteTree(m_root);

}

//adds value to tree
template<typename T>
void BinarySearchTree<T>::add(T value){

	//if this is the first value added, m_root's value becomes this value.
	if(m_root == nullptr){
		Node<T>* tempNode = new Node<T>();
		tempNode->setValue(value);
		m_root = tempNode;
	}else{
		//otherwise, call the private add method
		add(value, m_root);
	}

}

//adds any value except for the first value to the tree
template<typename T>
void BinarySearchTree<T>::add(T value, Node<T>* subTree){
	
	//if the value is less than the current sub tree, look at the next value to the left
	if(value < subTree->getValue()){
		//if the current sub tree doesn't have a left child, add current value as left child
		if(subTree->getLeft() == nullptr){
			Node<T>* tempLeft = new Node<T>();
			tempLeft->setValue(value);
			subTree->setLeft(tempLeft);
		}else{
			//if the current sub tree has a left child, recurse to check that value
			add(value, subTree->getLeft());

		}
	//if value is greater than or equal to the current sub tree, look at the next value to the right
	}else{
		//if the current sub tree doesn't have a right child, add current value as right child
		if(subTree->getRight() == nullptr){
			Node<T>* tempRight = new Node<T>();
			tempRight->setValue(value);
			subTree->setRight(tempRight);
		}else{
			//if the current sub tree has a right child, recurse to check that value
			add(value, subTree->getRight());
		}

	}

}

//prints the tree in pre-order
template<typename T>
void BinarySearchTree<T>::printTree(){
	if(m_root == nullptr){
		std::cout << "The Tree is empty." << std::endl;
	}else{		
		printTree(m_root);
	}
}

//prints the tree in pre-order
template<typename T>
void BinarySearchTree<T>::printTree(Node<T>* subTree){
	//visit the node
	std::cout << subTree->getValue() << " ";
	//recurse down left subtree
	if(subTree->getLeft() != nullptr){
	printTree(subTree->getLeft());
	}
	//recurse down right subtree
	if(subTree->getRight() != nullptr){
	printTree(subTree->getRight());
	}

}

//prints tree in in-order
template<typename T>
void BinarySearchTree<T>::sortedPrint(){
	if(m_root == nullptr){
		std::cout << "The Tree is empty." << std::endl;
	}else{		
		sortedPrint(m_root);
	}
}

//prints tree in in-order
template<typename T>
void BinarySearchTree<T>::sortedPrint(Node<T>* subTree){

	if(subTree != nullptr){
		//recurse down left subtree
		if(subTree->getLeft() != nullptr){
			sortedPrint(subTree->getLeft());
		}
		//visit the node
		std::cout << subTree->getValue() << " ";
		//recurse down right subtree
		if(subTree->getRight() != nullptr){
			sortedPrint(subTree->getRight());
		}

	}

}

//searches for a value in the tree
template<typename T>
Node<T>* BinarySearchTree<T>::search(T value==5103==     in use at exit: 160 bytes in 18 blocks
){

	return search(value, m_root);

}

//searches for a value in the tree
template<typename T>
Node<T>* BinarySearchTree<T>::search(T value, Node<T>* subTree){

	//if a given node's value equals the prompted value, return it
	if(subTree->getValue() == value){
		return subTree;
	}
	//if the prompted value isn't in the tree, return nullptr
	if(subTree->getLeft() == nullptr && subTree->getRight() == nullptr){
		return nullptr;
	}
	//recurse down left subtree if the prompted value is less than the current value
	if(subTree->getValue() > value){
		return search(value, subTree->getLeft());
	}
	//recurse down right subtree if the prompted value is greater than or equal to the current value
	if(subTree->getValue() <= value){
		return search(value, subTree->getRight());
	}
}

//deletes the tree in post-order
template<typename T>
void BinarySearchTree<T>::deleteTree(Node<T>* subTree){

	if(subTree->getLeft() != nullptr){
	deleteTree(subTree->getLeft());
	}

	if(subTree->getRight() != nullptr){
	deleteTree(subTree->getRight());
	}

	delete subTree;

}



main: main.o
	g++ -g -std=c++11 main.o -o main

main.o: main.cpp Node.h Node.hpp BinarySearchTree.h BinarySearchTree.hpp
	g++ -g -std=c++11 -c main.cpp

clean:
	rm *.o

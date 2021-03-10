/*
	this file contain a class named vector_stack which has 2 private variables and 3 methods and a constructor.
	method 1: empty() //checks if the vector is empty
	method 2: push()  //push a char into stack
	method 3: pop()   //pop a char from stack and return it
	method 4: is_matched()	//check if the string is a match


*/


#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;


using std::string;
using std::vector;


class vector_stack{
	string s;
	int size=-1;
	vector<char> vect;
public:
	vector_stack(string S){
		s = S;
	}
	bool is_matched();
	bool empty() { return vect.empty(); }
	void push(char c) { vect.push_back(c); }
	char pop() { 
		char back = vect.back();
		vect.pop_back();
		return back;
	}

	

};


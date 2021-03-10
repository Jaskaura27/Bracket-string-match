/*
	this file has only on function in it which is a method of the class vector_stack.
	it returns a bool value;

*/


#include "vector_stack.h"
#include <iostream>
using namespace std;

bool vector_stack::is_matched() {
	
	if (s.length() == 0) {
		if (empty()) {
			return true;
		}
		else
			return false;
	}
	if (s.at(0) == '{' || s.at(0) == '[' || s.at(0) == '(') {
		push(s.at(0));
		string sub = s.erase(0,1);
		s = sub;
		return is_matched();
	}
	
	if (s.at(0) == ')') {
		if (pop() == '(') {
			string sub = s.erase(0, 1);
			s = sub;
			return is_matched();
		}
		else {
			return false;
		}
	}

	if (s.at(0) == ']') {
		if (pop() == '[') {
			string sub = s.erase(0, 1);
			s = sub;
			return is_matched();
		}
		else {
			return false;
		}
	}

	if (s.at(0) == '}') {
		if (pop() == '{') {
			string sub = s.erase(0, 1);
			s = sub;
			return is_matched();
		}
		else {
			return false;
		}
	}

	return false;
}
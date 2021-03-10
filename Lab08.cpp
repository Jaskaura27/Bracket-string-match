// Lab08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jaspreet Singh (100345381)
/*
	this program check if a string of brackets is a match or not using two different algorithms one with vector stack and other with list stack.
	there are total six test case three for each.
	this file also contain an method called test() which takes two parameters one an bool and other an string and print if the string is a match or not.

*/

#include <iostream>
#include "vector_stack.h"
#include "list_stack.h"

using namespace std;
void test(bool i,string s) {
	if (i == true) {
		cout << s<<" is a match" << endl;
	}
	else {
		cout <<s<< " is not a match" << endl;
	}
}

int main()
{	


	vector_stack i("([][(({[]})()[])])[]");
	test(i.is_matched(), "([][(({[]})()[])])[]");

	vector_stack j("([][)]");
	test(j.is_matched(), "([][)]");

	vector_stack f("(((){})");
	test(f.is_matched(), "(((){})");


	list a("([][(({[]})()[])])[]");
	test(a.isMatched(), "([][(({[]})()[])])[]");

	list b("([][)]");
	test(b.isMatched(), "([][)]");

	list c("(((){})");
	test(c.isMatched(), "(((){})");
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

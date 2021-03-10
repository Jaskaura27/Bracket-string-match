
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

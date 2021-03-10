/*
this file has two classes node and list.
node:
	this class has total three variables one is an char and other two are pointers to node.
	this file has an constructor, destructor and a friend class list.

list:
	this file has three private variables two are pointers to node and one is a string.
	this file also has an constructor and a destructor. it also has five additional methods.

*/

#include <iostream>
#include <string>
using std::string;

class node {
	char data;
	node *next, *prev;
public:
	node(char d, node *n = nullptr, node *p = nullptr) : data(d), next(n), prev(p) {}
	~node() { delete next; }
	friend class list;
};
class list {
	node *head, *tail;
	string s;
public:
	list(string S) : head(nullptr), tail(head),s(S) {}
	~list() { delete head; }
	bool isMatched();
	void add_to_beginning(char c);
	void add_to_end(char c);
	void remove_from_beginning();
	void remove_from_end();
};
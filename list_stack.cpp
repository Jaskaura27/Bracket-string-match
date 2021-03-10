/*
	this file has 5 methods from class list
	isMatched() //this method determine if the string is matched or not and return an bool value accordingly
	add_to_beginning() //this method adds an node to the head
	add_to_end() //this method add an node to the end of the list
	remove_from_beginning() //this method remove the first node
	remove_from_end() //this method removes an node from the end
*/

#include "list_stack.h"

bool list::isMatched() {
	if (s.length() == 0) {
		if (head == nullptr) {
			return true;
		}
		else {
			return false;
		}
	}
	if (s.at(0) == '{' || s.at(0) == '[' || s.at(0) == '(') {
		add_to_end(s.at(0));
		string sub = s.erase(0, 1);
		s = sub;
		return isMatched();
	}
	if (s.at(0) == '}') {
		if (tail->data != '{') {
			return false;
		}
		else {
			remove_from_end();
			string sub = s.erase(0, 1);
			s = sub;
			return isMatched();
		}
	}
	if (s.at(0) == ']') {
		if (tail->data != '[') {
			return false;
		}
		else {
			remove_from_end();
			string sub = s.erase(0, 1);
			s = sub;
			return isMatched();
		}
	}
	if (s.at(0) == ')') {
		if (tail->data != '(') {
			return false;
		}
		else {
			remove_from_end();
			string sub = s.erase(0, 1);
			s = sub;
			return isMatched();
		}
	}
	return false;
}


void list::add_to_beginning(char c) {
	node *new_node = new node(c, head);
	if (head)   head->prev = new_node;
	head = new_node;
	if (!tail)  tail = head;
}

void list::add_to_end(char c) {
	if (tail) {
		node *new_node = new node(c, nullptr, tail);
		tail->next = new_node;
		tail = new_node;
	}
	else {
		add_to_beginning(c);
	}
}

void list::remove_from_beginning() {
	node * const old_head = head;
	head = head->next;
	old_head->next = nullptr;
	delete old_head;
	if (!head)  tail = nullptr;
	else        head->prev = nullptr;
}

void list::remove_from_end() {
	if (tail->prev) { 
		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;
	}
	else {           
		delete tail;
		head = tail = nullptr;
	}
}

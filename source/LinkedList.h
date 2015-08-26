#pragma once
//#include "Node.h" //this is legal, only when 

class Node;

class LinkedList{
public:
	LinkedList();
	void add(Node* head,char* data);
	int count(Node* head);
	void display(Node* head);
	Node* getLinkedListHead();
private:
	Node* _head;
};
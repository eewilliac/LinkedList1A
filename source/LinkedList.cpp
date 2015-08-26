#include "Node.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList(){
	_head=new Node();
}

Node* LinkedList::getLinkedListHead(){
	return _head;
}

void LinkedList::add(Node* head,char* data){
	Node* newNode=new Node();
	newNode->next=head;
	newNode->data=data;
	_head=newNode;
}

int LinkedList::count(Node* head){
	int counter=0;
	while(head->next!=NULL){
		counter++;
		head=head->next;
	}
	return counter;
}

void LinkedList::display(Node* head){
	while(head->next!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}
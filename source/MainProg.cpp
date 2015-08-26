#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(int argc, char* argv[]){
	char p;
	LinkedList* ll=new LinkedList();
	ll->add(ll->getLinkedListHead(),"Ettienne");
	ll->add(ll->getLinkedListHead(),"Aida");
	ll->add(ll->getLinkedListHead(),"AidaPauline");
	ll->display(ll->getLinkedListHead());
	cin >> p;
	return 0;
}
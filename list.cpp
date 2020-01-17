#include<iostream>
#include "linkedlist.h"
#include<stddef.h>
using namespace std;


List::List(){
	HEAD = NULL;
	TAIL = NULL;
	
}

List::~List(){}

bool List::isEmpty(){
	if (HEAD==NULL && TAIL == NULL){
		return true;
	}
	else
	{
		return false;
		}
}

void List::addToHead(int data){
	Node* newNode= new Node();
	newNode ->info = data;
	newNode ->next = HEAD;
	HEAD = newNode;
	if(TAIL==NULL)
		TAIL= HEAD;
/*	Node* temp = HEAD;
	while(temp->next!=NULL){
		temp = temp -> next;
	}
	temp -> next = HEAD;
	
*/
}  

void List::traverse(){
	Node* temp = HEAD;
	
	while(temp!=NULL){
		cout<< temp->info<< "   ";
		temp = temp-> next;
		
		
	}
	
}
int List::removeFromHead(){
	Node* nodeToDelete;
	nodeToDelete =HEAD;
	int num = HEAD->info;
	HEAD = nodeToDelete->next;
	return num;
}

int List::showHead(){
	int num = HEAD->info;
	return num;
}

bool List::retrieve(int data, Node * &outputptr) {
		Node* p = new Node();
	p = HEAD;
	while (p != NULL && p->info != data) {
		p = p->next;
	}
	if (p == NULL)	return false;
	else {
		outputptr = p;
		return true;
	}
}
int List::showNext(Node* outputptr){
	Node* ptr = outputptr->next;
	int data = ptr -> info;
	return data;
}

int main(){
	Node* ptr = new Node();
	List list1;
	for (int i = 50; i <= 60; i += 2) {
		list1.addToHead(i);
	}
	if(list1.isEmpty()==true)
		cout<<"LISt Empty"<<endl;
	else
		cout<<"Not empty"<<endl;
	
	list1.traverse();
	list1.retrieve(54, ptr);
	cout<<list1.showNext(ptr);
/*	list1.addToHead(55);
	list1.addToHead(46);
	list1.addToHead(85);
	list1.addToHead(155);
	list1.traverse();
	list1.remove(55);
	list1.removeFromHead();
	list1.search(56);
	list1.addToTail(88);
	list1.retrieve(52, ptr);
	list1.add(7, ptr);
	list1.traverse();
	//cout<<list1.removeFromTail();
//IMPLEMETING STACK 
	cout<<" STACK  /n Implementing stack:"<<endl;
	Stack stack;
	stack.isEmpty();
	for(int i=2;i<10;i+=2)
		stack.push(i);
	cout<<stack.top()<<endl;
	cout<<stack.top()<<endl;
	cout<<stack.pop()<<endl;
	cout<<stack.pop()<<endl;
	stack.isEmpty();
//implementing queue
	cout<<"Queue Implementation:"<<endl;
	Queue queue;
	queue.isEmpty();
	queue.enqueue(102);
	queue.enqueue(103);
	queue.enqueue(104);
	queue.dequeue();
	queue.isEmpty();
	queue.showitems();
	
	*/
	return 0;
	
	
}


#include<iostream>
#include "linkedlist.h"
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
bool List::isFull(){
	int p=0;
		Node* temp = HEAD;
	
	while(temp!=NULL){
		p++;
		temp = temp-> next;
		if(temp==HEAD){
		    break;
		}
		
	}
	if(p<maxSize)
		return false;
	else
		return true;
}

void List::addToHead(int data){
	Node* newNode= new Node();
	newNode ->info = data;
	newNode ->next = NULL;
	HEAD = newNode;
	if(TAIL==NULL){
		TAIL= HEAD;
	}
} 
void List::addToTail(int data){
	Node* newnode = new Node();
	newnode->info = data;
	newnode->next = NULL;
	TAIL->next = newnode;
	TAIL = newnode;
	
    if(HEAD==NULL){
        HEAD=TAIL;
    }
    else{
        TAIL->next = HEAD;
    }
	
}
int List::removeFromHead(){
	Node* nodeToDelete;
	nodeToDelete =HEAD;
	int num = HEAD->info;
	HEAD = nodeToDelete->next;
	TAIL->next = HEAD;
	return num;
}
void List::traverse(){
	Node* temp = HEAD;
	
	while(temp!=NULL){
		cout<< temp->info<<"\t";
		temp = temp-> next;
		if(temp==HEAD){
		    return;
		}
		
	}
	
}

int List::showHead(){
	return HEAD-> info;
}
int List::showTail(){
	return TAIL -> info;
}
//main function
int main(){	
//IMPLEMENTING QUEUE
	cout<<"\nQueue Implementation:"<<endl;
	Queue qu;
	qu.isEmpty();
	qu.enqueuetohead(4);
	qu.dequeue();
	for(int i=1;i<15;i++){
		if(qu.isFull() == false)
			qu.enqueue(i);
		else{
			cout<<"Queue is full !";
			break;
		}
			
	}
	//qu.isFull();
	if(qu.isFull() == true)
		cout<<" queue full  ";
	else
		cout<<"Not full ";
	
	//qu.dequeue();
	
	qu.isEmpty();
	qu.showitems();
	cout<<"\n Rear and front:";
	cout<<qu.rear()<<"  ";
	cout<< qu.front();
	
	return 0;	
}



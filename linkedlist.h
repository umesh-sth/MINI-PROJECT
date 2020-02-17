#define maxSize 7
#include<iostream>
class Node{
	 public:
	int info;
	Node* next;
};

class List{
	private:
		Node* HEAD;
		Node* TAIL;
		public:
		List();
		~List();
	
		//functions
		
		bool isEmpty();
		void addToHead(int data);
		void addToTail(int data);
		int removeFromHead();
		bool isFull();
		void traverse();
		int itemHead();
		int showHead();
		int showTail();
};
class Queue{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			std::cout<<"Queue Empty"<<std::endl;
			else
			std::cout<<"Queue Not Empty!"<<std::endl;
			
		}
		bool isFull(){
			
			if(l.isFull()== true)
				return true;
			else
				return false;
			
		}
		void enqueuetohead(int data){
			l.addToHead(data);
		}
		void enqueue(int data){
			l.addToTail(data);
		}
		void dequeue (){
			l.removeFromHead();
			
		}
		void showitems(){
			l.traverse();
		}
		int rear(){
			l.showTail();
		}
		int front(){
			l.showHead();
		}
};



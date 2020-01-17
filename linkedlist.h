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
		void traverse();
		void remove(int data);
		int removeFromHead();
		bool search(int data);
		void addToTail(int data);
		void add(int data, Node* predessor);
		bool retrieve ( int data, Node* &outputptr);
		int showHead();
		int showNext(Node* outputptr);
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
			std::cout<<"Queue not Empty!"<<std::endl;
			
		}
		void enqueue(int data){
			l.addToHead(data);
		}
		void dequeue (){
			l.removeFromHead();
			
		}
		void showitems(){
			l.traverse();
		}
};

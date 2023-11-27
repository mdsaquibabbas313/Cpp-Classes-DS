#include<iostream>
#include<bits/stdc++.h>
#define N 3
using namespace std;

class node{
	public:
	int data;
	node* next;
	
	node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

void dequeue(node* &front) {
    if(front == nullptr) {
        cout << "Queue is Empty Sanad" << endl;
        return ;
    }
	node* to_delete = front;
	front = front->next;
	delete(to_delete);
}

void enqueue(node* &front ,node* &rear ,  int data) {
	node* newnode = new node(data);
	
	if(front == NULL && rear == NULL) {
		front = rear = newnode;
	}
	
	else {
		rear->next = newnode;
		rear = newnode;
	}
}
void display(node* front) {
	node* temp = front;
	
	while(temp != NULL) {
		cout << temp -> data << "->";
		temp=temp->next;
	}
	cout << "NULL" << endl;
	cout << endl;
}


int main() {
	node* front = NULL ;
	node* rear = NULL;
	
	enqueue(front , rear , 2);
	enqueue(front , rear , 3);
	enqueue(front , rear , 5);
	enqueue(front , rear , 6);
	enqueue(front , rear , 1);
// 	display(front);
	dequeue(front);

    dequeue(front);
    dequeue(front);
    dequeue(front);
    dequeue(front);
    dequeue(front);
    	
	return 0;
}

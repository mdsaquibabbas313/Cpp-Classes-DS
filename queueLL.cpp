#include<iostream>
// #include<bits/stdc++.h>
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
	cout << endl;
}


int main() {
	node* front = NULL , rear = NULL;
	
	enqueue(front , rear , 2);
	enqueue(front , rear , 3);
	enqueue(front , rear , 5);
	enqueue(front , rear , 6);
	enqueue(front , rear , 1);
	
	return 0;
}

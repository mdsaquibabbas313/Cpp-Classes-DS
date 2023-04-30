#include<iostream>
// #include<bits/stdc++.h>
#define N 3
using namespace std;
class stack{
	int *arr;
	int top;
	
	public:
		stack() {
			arr = new int[N];
			top = -1;
		}
		
		// push
		bool isFull() {
			if(top == N-1) return true;
			else return false;
		}
		
		bool isEmpty() {
			if(top == -1) return true;
			else return false;
		}
		
		void push(int data) {
			if(isFull()) {
				cout << "Stack is Full" << endl;
				return ;
			}
			
			top++;
			arr[top] = data;
		}
		void pop() {
			if(isEmpty()) {
				cout << "Stack is Empty";
				return;
			}
			
			top--;
		}
		
		int peek() {
			if(isEmpty()) {
				cout << "Stack is Empty" << endl;
				return -1;
			}
			
			return arr[top];
		}
		
};
int main() {
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop();
	cout << st.peek() << endl;
	st.pop();
	st.pop();
	st.pop();
	cout << st.peek() << endl;
	return 0;
}

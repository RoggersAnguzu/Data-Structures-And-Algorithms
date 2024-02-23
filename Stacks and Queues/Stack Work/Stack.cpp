#include<iostream>
#define size 200

using namespace std; // A stack Normally operates at based of the LIFO Rule.

class stack{
	int top;
	int array[size];
	public:
		stack(){
			top=-1;
		}
		
		void push(int item){
			if(top==size-1){
				cout<<"Stack Over Flow";
				return;
			}
			else{
				top++;
				array[top]=item;
			}
		}
		
		void pop(){
			if(top==-1){
				cout<<"Stack underflow";
				return;
			}
			else{
				cout<<array[top]<<" ";
				top--;
			}
		}
		void display(){
			while(top!=-1){
				pop();
			}
		}
};

int main(){
	stack s;
	int i,n;
	int item;
	cout<<"How Many Numbers are you Entering: ";
	cin>>n;
	
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++){
		cin>>item;
		s.push(item);
	}
	s.display();
}

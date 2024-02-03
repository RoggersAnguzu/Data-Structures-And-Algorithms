#include<iostream>
#define size 200

using namespace std;

class stack{
	int top;
	string array[size];
	public:
		stack(){
			top=-1;
		}
		
		void push(string item){
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
	string item;
	cout<<"How Many Names are you Entering: ";
	cin>>n;
	
	cout<<"Enter the Names: ";
	for(i=0;i<n;i++){
		cin>>item;
		s.push(item);
	}
	s.display();
}

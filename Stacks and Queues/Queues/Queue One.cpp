#include<iostream>
#define size 30

using namespace std;
class queue{
	int rare,front;
	int array[size];
	public:
		queue(){
			rare=-1;
			front=-1;
		}
		void enqueue(int item){
			if(rare==size-1){
				cout<<"Queues Overflow";
				return;
			}
			else if(rare==-1){
				rare++;
				front++;
				array[rare]=item;
			}
			else{
				rare++;
				array[rare]=item;
			}
		}
		void dequeue(){
			if(front==-1){
				cout<<"Queue underflow ";
				return;
			}
			else if(front==rare){
				cout<<array[front]<<" ";
				front=rare=-1;
			}
			else{
				cout<<array[front]<<" ";
				front ++;
			}
		}
		void display(){
			while(front!=-1){
				dequeue();
			}
		}
};

int main(){
	queue q;
	int i,n;
	int item;
	cout<<"How many Values are you Entering?:\n";
	cin>>n;
	cout<<"Enter the Values";
	for(i=0;i<n;i++){
		cin>>item;
		q.enqueue(item);
	}
	q.display();
}

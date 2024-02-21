#include<iostream>
using namespace std;

struct node{ //This part is used to define a Struct instead of a Class because it's Contents and variables are public by Default not Like class that are Private
	int data;
	node *next;// This part is used to Reflect to the Next Number Value in the LinkedList
};

class linkedlist{
	node *head, *tail;
	public:
		void createnode(int item){
			node *newnode=new node;
			newnode->data=item;
			newnode->next=NULL;
			
			if(head==NULL){
				head=newnode;
				tail=newnode;
			}
			else{
				tail->next=newnode;
				tail=newnode;
			}
		}
		
		//inserting new node;
		void insertnewnode(int item){
			node *newnode=new node;
			newnode->data=item;
			newnode->next=NULL;
			
			int i,position;
			cout<<"Enter the Position Where to insert the new node";
			cin>>position;
			
			node *current=head;
			node *previous;
			
			for(i=0;i<position;i++){
				previous=current;
				current=current->next;
			}
			if(current==head){
				newnode->next=current;
				head=newnode;
			}
			else if(current==tail){
				tail->next=newnode;
				tail=newnode;
			}
			else{
				previous->next=newnode;
				newnode->next=current;
			}
		}
		
		void display(){
			node *temp=head;
			while(temp!=NULL){
				cout<<temp->data<<"<--->";
				temp=temp->next;
			}
		}
};

int main(){
	linkedlist usiu;
	int i, n;
	int item;
	cout<<"How many Values are you Entering: ";
	cin>>n;
	cout<<"Enter the Values: ";
	for(i=1;i<n;i++){
		cin>>item;
		usiu.createnode(item);
	}
	usiu.display();
	cout<<"Enter the New Nodes to Insert \n";
	cin>>item;
	usiu.insertnewnode(item);
	usiu.display();
}

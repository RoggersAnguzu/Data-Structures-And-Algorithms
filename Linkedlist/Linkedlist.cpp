#include<iostream>
using namespace std;

struct node{
	int data;
	node *next; //This part is used to demacate the Pointer to the Next Node.
};

class linkedlist{
	node *head, *tail;
	public:
		void createnode(int item){//Creation of a New Node.
			node *newnode=new node;
			newnode->data=item;
			newnode->next=NULL;
			
			if(head==NULL){ //Checking if the headnode is Null.
				head=newnode;
				tail=newnode;
			}
			else{
				tail->next=newnode;
				tail=newnode;
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
	cout<<"How Many Values are you Entering: ";
	cin>>n;
	cout<<"Enter the Values: ";
	for(i=0;i<n;i++){
		cin>>item;
		usiu.createnode(item);
	}
	usiu.display();
}

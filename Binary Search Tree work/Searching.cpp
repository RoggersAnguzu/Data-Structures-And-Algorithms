#include<iostream>
using namespace std;
struct node{
	int data;
	node *left, *right;
};

node *createnode(node *root, int item){
	if(root==NULL){
		node *newnode=new node;
		newnode->data=item;
		newnode->left=NULL;
		newnode->right=NULL;
		return newnode;
	}
	else if(item<root->data){
		root->left=createnode(root->left,item);
	}
	else{
		root->right=createnode(root->right,item);
	}
	return root;
}
void InorderTraversal(node *root){
	if(root==NULL){
		return;
	
	}
	else{
			InorderTraversal(root->left);
			cout<<root->data<<" ";
	        InorderTraversal(root->right);
	}
}
void searchnode(node *root, int searchKey){
	if(root==NULL){
		cout<<"ITEM not Found";
		return;
	}
	else if(searchKey==root->data){
		cout<<"Item has been Found: "; 
	}
	else if(searchKey<root->data){
		searchnode(root->left,searchKey);
	}
	else{
		searchnode(root->right,searchKey);
	}
}

int main(){
	node *root=NULL;
	int i,n;
	int item;
	
	cout<<"How many Values are you Entering: ";
	cin>>n;
	cout<<"Enter the Values: ";
	for(i=0;i<n;i++){
		cin>>item;
		root=createnode(root,item);
		
	}
	cout<<"Pre Order Traversal: \n";
	InorderTraversal(root);
	
	cout<<"Enter the Item to Search: \n";
	cin>>item;
	searchnode(root,item);
}

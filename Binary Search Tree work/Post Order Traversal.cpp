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
void PostorderTraversal(node *root){
	if(root==NULL){
		return;
	
	}
	else{
			PostorderTraversal(root->left);
	        PostorderTraversal(root->right);
	        cout<<root->data<<" ";
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
	cout<<"Post Order Traversal: \n";
	PostorderTraversal(root);
}

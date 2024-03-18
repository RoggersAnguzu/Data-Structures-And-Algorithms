#include<iostream>
using namespace std;

struct node{
	int data;
	node *left,*right;
};

node *createnode(node *root, int item){
	if(root==NULL){
		root=new node;
		root->data=item;
		root->left=NULL;
		root->right=NULL;
		return root;
	}else if(item<root->data){
		root->left=createnode(root->left,item);
	}else{
		root->right=createnode(root->right,item);
	}
}

void InorderTraversal(node *root){
	if(root==NULL){
		return;
	}else {
		InorderTraversal(root->left);
		cout<<root->data<<" ";
		InorderTraversal(root->right);
	}
}
void PreorderTraversal(node *root){
	if(root==NULL){
		return;
	}else{
		cout<<root->data<<" ";
		InorderTraversal(root->left);
		InorderTraversal(root->right);
	}
}
void PostorderTraversal(node *root){
	if(root==NULL){
		return;
	}else{
		PostorderTraversal(root->left);
		PostorderTraversal(root->right);
		cout<<root->data<<" ";
	}
}
void SearchingData(node *root,int item){
	if(root==NULL){
		cout<<"The Data was Never Found!";
	}else if(item==root->data){
		cout<<"The Data Has been Found!";
	}else if(item<root->data){
		root->left=createnode(root->left,item);
	}else{
		root->right=createnode(root->right,item);
	}
}

int main(){
	node *root=NULL;
	int i, n, item;
	
	cout<<"How Many Values do you intend to Work With?: ";
	cin>>n;
	cout<<"Enter the Values: ";
	for(;i<n;i++){
		cin>>item;
		root=createnode(root, item);
	}
	cout<<"\nPreorder Version\n";
	PreorderTraversal(root);
	
	cout<<"Postorder Version\n";
	PostorderTraversal(root);
	
	cout<<"Inorder Version\n";
	InorderTraversal(root);
	
	cout<<"Enter a Number to Search: ";
	cin>>item;
	
	SearchingData(root, item);
}

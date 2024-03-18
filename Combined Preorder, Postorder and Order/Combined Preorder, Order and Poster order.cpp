#include<iostream>
using namespace std;
 
struct node{ // This Declares the Node ie the Root.
	int data;
	node *left, *right;
};

node *createnode(node *root, int item){ //This Module is used to Create  a new node.
 	if(root==NULL){
 		root=new node;
 		root->data=item;
 		root->left=NULL;
		root->right=NULL;
 		return root;
	 } else if(item<root->data)
	 	root->left=createnode(root->left, item);
	   else
	 	 root->right=createnode(root->right,item );	
	}
 
 void preorder(node *root){
 	if(root==NULL)
 	return;
 	else{
 		cout<<root->data<<"  ";
 		preorder(root->left);
 		preorder(root->right);
	 }
 }
 
 void inorder(node *root){
 	if(root==NULL)
 	return;
 	else{
 		inorder(root->left);
 		cout<<root->data<<"  ";
 		inorder(root->right);
	 }
 }
 
 void postorder(node *root){
 	if(root==NULL)
 	return;
 	else{
 		postorder(root->left);
 		postorder(root->right);
 		cout<<root->data<<"  ";
 		}
 }
 
 void searchnode(node *root, int item){
 	if(root==NULL){
 		cout<<"Item was never found ";
 		return;
	 } else if(item==root->data)
 		cout<<"Item has been found ";
	 else if(item<root->data) 
		 searchnode(root->left, item);	
	 else
	 	searchnode(root->right, item);
	}

 int main(){
 	node *root=NULL;
 	 int i,n;
 	int item;
 	
 	cout<<"How many values do you want to Enter: ";
 	cin>>n;
 	
 	cout<<"enter values ";
 	for(i=0;i<n; i++){
 		cin>>item;
 		root=createnode(root,item);
	 }
	 
	 cout<<"\nPreorder ";
	 preorder(root); 
	 cout<<"\nInorder ";
	 inorder(root);
	 cout<<"\nPostorder ";
	 postorder(root);
	 cout<<"enter item to search ";
	 cin>>item;
	 searchnode(root, item);
 }


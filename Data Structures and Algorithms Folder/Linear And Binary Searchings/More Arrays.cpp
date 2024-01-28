#include<iostream>
using namespace std;

int i;
int size;
double array[100];

void getvalues(){
	cout<<"How many Values would you like to Enter: "<<endl;
	cin>>size;
	cout<<"Enter the Values: "<<endl;
	for(i=0;i<size;i++){
		cin>>array[i];
	}
}

void print(){
	for(i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
}

//Increamenting the Values Captured by 30%//Logically Resolve First

void increament(){
	for(i=0;i<size;i++){
		array[i]=array[i]+1.3;
	}
	
}

int main(){
	getvalues();
	increament();
	print();	
}

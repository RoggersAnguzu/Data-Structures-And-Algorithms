#include <iostream>
#define size 100
using namespace std;
int n,i,j;
double array[size];

void getvalues(){
	cout<<"How Many Numbers Are you Entering: ";
	cin>>n;
	
	cout<<"Enter Desired Numbers to be Sorted:";
	for(;i<n;++i){
		cin>>array[i];}
}

void insertionsort(){
	for(i=0;i<n;i++){
		j=i;
		while(array[j]<array[j-1]){
			swap(array[j],array[j-1]);
			j--;
		}
	}
}

void print(){
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	getvalues();
	insertionsort();
	print();
}

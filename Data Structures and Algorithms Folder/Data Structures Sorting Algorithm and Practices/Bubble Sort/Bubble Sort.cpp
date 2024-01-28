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

void bubblesort(){
	for(i=1;i<n;i++){
		for(j=0;j<n-1;j++){
			if(array[j+1]<array[j]){
				swap(array[j],array[j+1]);
			}
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
	bubblesort();
	print();
}

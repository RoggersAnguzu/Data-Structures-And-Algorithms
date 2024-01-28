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

void selectionsort(){
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(array[j]<array[i]){
				swap(array[i],array[j]);
			}
		}
	}
	if(i>n){
		cout<<"The Number Has Not been Found: ";
	}
}

void print(){
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	getvalues();
	selectionsort();
	print();
	
}

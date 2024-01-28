#include<iostream>
using namespace std;

int looping,numbers;
double storage[200];

void Capturing(){
	cout<<"How Many Values Are you Entering: "<<endl;
	cin>>numbers;
	cout<<"Input your Values: "<<endl;
	for(looping=0;looping<n;looping++){
		cin>>storage[i];
	}
}
void Output(){
	cout<<"Below are the values int the Storage Vault: \n"<<endl;
	for(looping=0;looping<numbers;looping++){
		cout<<storage[i]<<" ";
	}
}

//BINARY SEARCH ALGORITHM
void binarysearch(){
	
	int searchkey;
	cout<<"Enter value to Search: "<<endl;
	cin>>searchkey;
	
	int low=0;
	int high=n-1;
	int mid;
	
	while(low<=high){
		mid=(low+high)/2;
		if(searchkey==array[mid]){
			cout<<searchkey<<" Has been found at Index [" << "] "<<mid<<endl;
			break;
		}
		else if( searchkey<array[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
}

void deletingElements()

int main(){
	Capturing();
	binarysearch();
	Output();
	
	return 0;
}

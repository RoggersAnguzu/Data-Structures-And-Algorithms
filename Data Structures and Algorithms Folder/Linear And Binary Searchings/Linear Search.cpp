#include<iostream>
using namespace std;

int i,n;
double array[100];

void getvalues(){
	cout<<"How Many Values Are you Entering: "<<endl;
	cin>>n;
	cout<<"Enter the Values: "<<endl;
	for(i=0;i<n;i++){
		cin>>array[i];
	}
}

void linearsearch(){
	int searchkey;
	cout<<"Enter value to Search: "<<endl;
	cin>>searchkey;
	
	for(i=0;i<n;i++){
		if(searchkey==array[i]){
			cout<<searchkey<<" Has been found at Index ["<<i<<" ]"<<endl;
			cout<<"Enter a Value to store in this current Slot "<<endl;
			cin>>array[i];
			break;
		}
	}
	if(i>=n){ //Although this Part Can be left Out
		cout<<searchkey<<" Was Never Found"<<endl;
	}
}
void print(){
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	//LINEAR SEARCH.
	getvalues();
	linearsearch();
	print();
}


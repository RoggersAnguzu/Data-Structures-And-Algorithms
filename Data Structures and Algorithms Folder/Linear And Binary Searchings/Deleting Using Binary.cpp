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
void print(){
	cout<<"The Valuesa are: \n"<<endl;
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
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
			cout<<searchkey<<" Has been found at Index ["<<mid<<"]"<<endl;
			for(int j=mid;j<n-1;j++){
				array[j]=array[j+1];
			}
			n--;
			break;
		}
		else if( searchkey<array[mid]){
			high=mid-1;
				for(int j=mid;j<n-1;j++){
				array[j]=array[j+1];
			}
			n--;
		}
		else{
			low=mid+1;
				for(int j=mid;j<n-1;j++){
				array[j]=array[j+1];
			}
			n--;
		}
	}
}

int main(){
	getvalues();
	binarysearch();
	print();
	
	return 0;
}

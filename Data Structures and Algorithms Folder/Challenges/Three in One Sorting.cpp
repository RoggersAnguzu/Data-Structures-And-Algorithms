#include <iostream>
using namespace std;
int n,x,j,i;
double array[100];


void getValues(){
	cout<<"How many Numbers are you Entering?: ";
	cin>>n;
	cout<<"Enter the Numbers below: "<<endl;
	for(i=0;i<n;i++){
		cin>>array[i];
	}
}
void SelectionSort(){
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(array[j]<array[i]){
				swap(array[j],array[i]);
			}
		}
	}
}
void BinarySearch(){
	int mid;
	int high=n-1;
	int low=0;
	mid=(low+high)/2;
	cout<<"Enter the Number you are Searching for Please: ";
	cin>>x;
	while(low<=high){
		if(x==array[mid]){
			cout<<"The Value has been  found at index ["<<mid<<"]"<<endl;
			break;
		}
		else if(x<array[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
}
void print(){
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	getValues();
	SelectionSort();
	BinarySearch();
	print();
}

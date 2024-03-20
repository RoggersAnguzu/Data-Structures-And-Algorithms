#include<iostream>
#define size 100
using namespace std;
int i,n,j;
int array[size];

int Partition(int array[],int low,int high){
	i=low;
	j=high+1;
	int Pivot=array[low];
	while(i<j){
		do{
			j--;
		}while(array[j]>Pivot); // The Simple Logic Here is that we are collecting the Bigger elements than Pivot to the right.
		do{
			i++;
		}while(array[i]<Pivot); // The Logic is that we are collecting Smaller elements than the Pivot to the Left.
		
		if(i<j){
			swap(array[i],array[j]);
		}
	}
	swap(array[low],array[j]);
	return j;
}

void QuickSort(int array[], int low, int high){
	if(low<high){
		int p=Partition(array,low,high);
		QuickSort(array,low,p-1);
		QuickSort(array,p+1,high);
	}
}

void GetValues(){
	cout<<"How Many Values are you Quick Sorting: \n";
	cin>>n;
	cout<<"Enter the Values: ";
	for(i=0;i<n;i++){
		cin>>array[i];
	}
}

void Display(){
	for(i=0;i<n;i++){
		cout<<array[i]<<"->";
	}
}

int main(){
	GetValues();
	QuickSort(array,0,n-1);
	Display();
	
}

#include<iostream>
#define size 100
using namespace std;

int i,j,n;
int array[size];

void getValues(){
	cout<<"How many Values Are you Merge Sorting?: \n";
	cin>>n;
	cout<<"Enter the Values: \n";
	for(i=0;i<n;i++){
		cin>>array[i];
	}
}
void Display(){
	for(i=0;i<n;i++){
		cout<<array[i]<<"->";
	}
}

void merge(int array[],int low, int mid, int high){
	i=low;
	j=mid+1;
	int k=low;
	int temp[n];
	
	while(low<=mid && j<=high){
		if(array[i]<array[j]){
			temp[k]=array[i];
			i++;
			k++;
		}else{
			temp[k]=array[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		temp[k]=array[i];
		i++;
		k++;
	}while(j<=high){
		temp[k]=array[j];
		k++;
		j++;
	}
	for(i=low;i<k;i++){
		array[i]=temp[i];
	}
	
}
void mergeSort(int array[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergeSort(array,low,mid);
		mergeSort(array,mid+1,high);
		
		merge(array,low,mid,high);
	}
}

int main(){
	getValues();
	mergeSort(array,0,n-1);
	Display();
}


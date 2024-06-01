#include<iostream>
#define size 100   // 	This marks the Size of the array that is used to Store the anticipated Values.
using namespace std;

int i,j,n;
int array[size];

void getValues(){
	cout<<"How many Values Are you Merge Sorting?: \n";  //This section Prompts User so noe input values.
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
	i=low; // Reassignations of the i variable to low.
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
	//Below is used to copy the Elements of the Temporay array to the main Array.
	for(i=low;i<k;i++){
		array[i]=temp[i];
	}
	
}
void mergeSort(int array[],int low,int high){// This is used for Demacation.
	if(low<high){
		int mid=(low+high)/2;
		mergeSort(array,low,mid);
		mergeSort(array,mid+1,high);
		//The Below Function Calls for Merge Function that collects all the Elements. 
		merge(array,low,mid,high);
	}
}

int main(){
	getValues();
	mergeSort(array,0,n-1);
	Display();
}


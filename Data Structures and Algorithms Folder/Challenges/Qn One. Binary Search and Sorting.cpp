#include <iostream>
using namespace std;

int n,result,j,i;
double array[100];


void getValues(){
	cout<<"How many Numbers are you Entering?: ";
	cin>>n;
	cout<<"Enter the Numbers below: "<<endl;
	for(i=0;i<n;i++){
		cin>>array[i];
	}
}

void InsertionSort(){
	for(i=0;i<n;i++){
		int j=i;
		while(array[j]<array[j-1]){
			swap(array[j],array[j-1]);
			j--;
		}
	}
}

void BubbleSort(){
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(array[j+1]<array[j]){
				swap(array[j],array[j+1]);
			}
		}
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

void print(){
	cout<<"\nBelow are the Sorted Numbers"<<endl;
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}
void Menu(){
	int storage;
	cout<<"BELOW IS OUR SORTING MENU\n";
	cout<<"1.Bubble Sort. \n2.Insertion Sort. \n3.Selection Sort. \n\n"<<endl;
	cout<<"Select the Sorting Algorithm to Use Please.\n";
	cin>>storage;
	switch(storage){
		case 1:
			getValues();
			BubbleSort();
			print();
			break;
		case 2:
			getValues();
			InsertionSort();
			print();
			break;
		case 3:
			getValues();
			SelectionSort();
			print();
			break;	
		default:
			cout<<"Kindly Enter the Correct Option ";
			Menu();
			break;
	}
}
void Exiting(){
	cout<<"\nDo you want to Exit?. \n1.Yes\n2.No\n";
	int opinion;cin>>opinion;
	switch(opinion){
		case 1:
			cout<<"Thanks for Using Our Sorting System\n";
			break;
		case 2:
			Menu();
			break;
		default:
			cout<<"Enter the Right Option Kindly";
			break;
	}
}

int main(){
	Menu();
	Exiting();
}

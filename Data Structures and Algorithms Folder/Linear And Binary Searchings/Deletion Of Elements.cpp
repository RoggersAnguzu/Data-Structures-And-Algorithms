#include<iostream>
using namespace std;

int n,x,delet;
double Numbers[200];

void inputting(){
	cout<<"How many Numbers are you Entering?: "<<endl;
	cin>>n;
	cout<<"Enter the Values Now: "<<endl;
	for(int i=0;i<n;i++){
		cin>>Numbers[i];
	}
}

void searching(){
	cout<<"Enter the Number you want to Search Please: "<<endl;
	cin>>x;
	for(int i=0;i<n;i++){
		if(x==Numbers[i]){
			cout<<"The Element ["<< x<<"] has been found at index ["<<i<<"]"<<endl;
			//DELETION OF AN ELEMENT.
			int decision;
			cout<<"Would you like to delete a Number from the Array? \n1. Yes\n2. No:"<<endl;
			cin>>decision;
	    switch(decision){
		case 1:
			cout<<"Enter the Number you want to delete: "<<endl;
			cin>>delet;
			if(delet == Numbers[i]){ // Check if the entered value matches the value to delete
				for(;i<n-1;i++){
					Numbers[i]=Numbers[i+1];
				}
				n--;
				break;
			}
			break;
		case 2:
			cout<<"Thanks for Using Our System";
			break;
		default:
			cout<<"Enter the Correct Option "<<endl;
			break;
     	}
	}
	if(i>=n){
		cout<<x<<"Has not Been Found"<<endl;
	}
}

void outputting(){
	for(int j=0;j<n;j++){ // Use a different variable j instead of i
		cout<<Numbers[j]<<" "<<endl;
	}
}

int main(){
	inputting();
	outputting();
	searching();
	outputting();	
}


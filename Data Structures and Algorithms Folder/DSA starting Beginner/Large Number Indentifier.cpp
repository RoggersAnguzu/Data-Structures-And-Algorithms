#include<iostream>
using namespace std;

int main(){
	double a,b,c,large;
	cout<<"Enter Three Values Please:\n";
	cin>>a>>b>>c;
	
	if(a>b){
		large=a;
	}
	else{
		large=b;
	}
	
	if(c>large){
		large=c;
	}
	cout<<"The Largest of "<<a<< " and "<<b<<" and "<<c<<" is "<<large;
}

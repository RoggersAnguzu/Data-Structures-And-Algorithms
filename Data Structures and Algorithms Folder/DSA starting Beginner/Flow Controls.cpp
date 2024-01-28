#include<iostream>
using namespace std;
	//*******************Tools*********************
	const int pen{10};
	const int Marker{20};
	const int Eraser{30};
	const int Rectangle{40};
	const int Circle{50};
	const int Ellipse{60};

int main(){
	/*
	int number1 {55};
	int number2 {60};
	
	bool result=true;
	if((number1>number2)==result){
		cout<<"Number One is the greatest"<<endl;
		cout<<boolalpha<<result;
	}
	else{
		cout<<"Number Two is the largest"<<endl;
		cout<<boolalpha<<result;
	}*/
	
	int tool{Rectangle};
	if(tool==pen){
		cout<<"Active tool is a pen"<<endl;
	}
	else if(tool==Marker){
		cout<<"Active tool is a Marker"<<endl;
	}
	else if(tool==Eraser){
		cout<<"Active tool is an Eraser"<<endl;
	}
	else if(tool==Rectangle){
		cout<<"Active tool is a Rectangle"<<endl;
	}
	else if(tool==Circle){
		cout<<"Active tool is a Circle"<<endl;
	}
	else if(tool==Ellipse){
		cout<<"Active tool is an Ellipse"<<endl;
	}
}

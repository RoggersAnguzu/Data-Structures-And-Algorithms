#include<iostream>
#include<string>
using namespace std;
	//*******************Tools*********************
	const int pen{10};
	const int Marker{20};
	const int Eraser{30};
	const int Rectangle{40};
	const int Circle{50};
	const int Ellipse{60};

int main(){
	int tool{pen};
	switch(tool){
		case pen:{
			cout<<"Active tool is Pen"<<endl;
		}
		break;
			case Eraser:{
			cout<<"Active tool is Eraser"<<endl;
		}
		break;
			case Rectangle:{
			cout<<"Active tool is Rectangle"<<endl;
		}
		break;
			case Circle:{
			cout<<"Active tool is Circle"<<endl;
		}
		break;
			case Ellipse:{
			cout<<"Active tool is Ellipse"<<endl;
		}
		break;
		default:{
			cout<<"No Match Found";
		}
			break;
	}
	cout<<"Moving On";
}

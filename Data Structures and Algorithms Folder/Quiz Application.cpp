#include<iostream>
#include<string>
#include<cmath>
#define big 100
using namespace std;
int i,n=1,m,sum=0,q1,q2,q3,q4,q5,q6,q7,q8,q9;
int marks[big];

//**WILL GET TIME AND REFINE THE CODE BECAUSE IT HAS A LITTLE BIT OF MANY GLOBAL VARIABLES AND REDUNDANCIES.
//This will make it to be more efficient and User Friendly

void printArrayValues(){
	for(int j=0;j<m;j++){
		cout<<marks[j]<<" ";
	}
}
void print(){
	for(int k=0;k<n;k++){
		cout<<"Total Sum: "<<sum;
	}
}
void Question1(){
	cout<<"\n\nQuestion One:\nWhat are the access specifiers in C++?\n1.Public,Private,Protected\n2.Linked List, Arrays\n\n";
	cin>>q1;
	switch(q1){
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question2(){
	cout<<"\n\nQuestion Two:\nName three types of inheritance in C++.\n1.Single ,Multiple,Multilevel inheritance\n2.Upper, Class, Dominat Inheritance\n\n";
	cin>>q2;
	switch(q2){
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question3(){
	cout<<"\n\nQuestion Three:\nList the standard C++ data types for representing integers\n1.Objects\n2.int,long\n\n";
	cin>>q3;
	switch(q3){
		case 2:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 1:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question4(){
	cout<<"\n\nQuestion Four:\nWhat are the main components of a class in C++.\n1.Data members,Member Functions\n2.Inheritence\n\n";
	cin>>q4;
	switch(q4){
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question5(){
	cout<<"\n\nQuestion Five:\nName three iterative control structures in C++\n 1.While loop, for Loop, Do while Loop\n2.if case, switch case \n\n";
	cin>>q5;
	switch(q5){
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question6(){
	cout<<"\n\nQuestion Six:\nIdentify three types of operators in C++\n1.Arithmetic & Logical Operator\n2.Physical Operators\n\n";
	cin>>q6;
	switch(q6){
			case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question7(){
	cout<<"\n\nQuestion Seven:\nWhat are the storage classes in C++\n1.Stack and Arrays\n2.Auto,Register\n\n";
	cin>>q7;
	switch(q7){
		case 1:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
			sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question8(){
	cout<<"\n\nQuestion Eight:\nList three methods for handling exceptions in C++\n1.try block catch block\n2.Clear,close\n\n";
	cin>>q8;
	switch(q8){
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void Question9(){
	cout<<"\n\nQuestion Nine:\nName three header files in C++ for input and output operations.\n1.IOSTREAM\n2.Include<Link>\n\n";
	cin>>q9;
	switch(q9){
		case 1:
		sum+=2;
		cout<<"Correct!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		case 2:
		cout<<"Wrong!!\n";
		cout<<"Your Score is :"<<sum;
			break;
		default:
			cout<<"Enter the Correct Option";
		    break;			
	}
}
void AllQuestions(){
	Question1();Question2();Question3();
	Question4();Question5();Question6();
	Question7();Question8();Question9();
}
void prompt(){
	cout<<"Enter your Student ID Number Before starting"<<"\n";
	int y;
	cin>>y;
	cout<<"*++**+**+*+**+***+**+**++*++*++*++*++*++*++*BEGIN*++*++*++*++*++*++*++*++*++*++*++*++*++*++*++*++\n";
	AllQuestions();
	cout<<"ID NUMBER: "<<y;
	cout<<"DEPT: SCHOOL OF SCIENCE AND TECHNOLOGY @USIU-AFRICA UNIVERSITY";
	print();
	
}


void SelectionSort(){
	cout<<"How many Numbers are you Sorting?\n";
	cin>>m;
	cout<<"Enter the Numbers:\n";
	for(int k=0;k<m;k++){
		cin>>marks[k];
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(marks[j]<marks[i]){
				swap(marks[j],marks[i]);
			}
		}
	}
	printArrayValues();
	cout<<"\nThanks for Using Our System ";
}

void InsertionSort(){
	cout<<"How many Numbers are you Sorting?\n";int nom;
	cin>>nom;
	cout<<"Enter the Numbers:\n";
	for(int k=0;k<nom;k++){
		cin>>marks[k];
	}
	
	for(int i=0;i<nom;i++){
		int q=i;
		while(marks[q]<marks[q-1]){
			swap(marks[q],marks[i]);
			q--;
		}
	}
	printArrayValues();
	cout<<"\nThanks for Using Our System ";
}
void BubbleSort(){ int no;
	cout<<"How many Numbers are you Sorting?\n";
	cin>>no;
	cout<<"Enter the Numbers:\n";
	for(int k=0;k<no;k++){
		cin>>marks[k];
	}
	
	for(int i=0;i<no-1;i++){
		for(int j=0;j<no-1;j++){
			if(marks[j+1]<marks[j]){
				swap(marks[j],marks[j+1]);
			}
		}
	}
	printArrayValues();
	cout<<"\nThanks for Using Our System ";
}
void Deleting(){
	cout<<"How many Numbers are you Deleting from?\n";int mn;
	cin>>mn;
	cout<<"Enter the Numbers:\n";
	for(int k=0;k<mn;k++){
		cin>>marks[k];
	}
	cout<<"Enter the Number to be Deleted:\n";int del;cin>>del;
	for(int i=0;i<mn;i++){
		if(del==marks[i]){
				marks[i]=del;
				printArrayValues();
		}
	}
	cout<<"\nThanks for Using Our System ";
}
void Exit(){
	cout<<"Would you Like to Exit?:\n1.Yes\n2.No\n";
	int option;cin>>option;
	switch(option){
		case 1:
			cout<<"Thanks for Using Our System\n";
			break;
		case 2:
				cout<<"***************FOR ADMIN USE ONLY***********\nEnter the Service Needed:\n\n";
	cout<<"1.Sorting Data.\n2.Deleting Data\n";
	int b;cin>>b;
	switch(b){
		case 1:
			cout<<"Select the Sorting Algorithm\n\n1.Selection Sort Algorithm\n2.Insertion Sort Algorithm\n3.Bubble Sort Algorithm\n";
			int p;cin>>p;
			switch(p){
				case 1:
					SelectionSort();
					Exit();
					break;
				case 2:
					InsertionSort();
					Exit();
					break;
				case 3:
					BubbleSort();
					Exit();
					break;
				default:
					cout<<"Please Enter the Appropriate Option";
					Exit();
				break;
			}
			break;
		case 2:
			Deleting();
			Exit();
			break;
	}
			break;
		default:
			cout<<"Please Enter the Appropriate Option\n";
			break;
	}
}	

void Admin(){
	cout<<"***************FOR ADMIN USE ONLY***********\nEnter the Service Needed:\n\n";
	cout<<"1.Sorting Data.\n2.Deleting Data\n";
	int b;cin>>b;
	switch(b){
		case 1:
			cout<<"Select the Sorting Algorithm\n\n1.Selection Sort Algorithm\n2.Insertion Sort Algorithm\n3.Bubble Sort Algorithm\n";
			int p;cin>>p;
			switch(p){
				case 1:
					SelectionSort();
					Exit();
					break;
				case 2:
					InsertionSort();
					Exit();
					break;
				case 3:
					BubbleSort();
					Exit();
					break;
				default:
					cout<<"Please Enter the Appropriate Option";
					Exit();
				break;
			}
			break;
		case 2:
			Deleting();
			Exit();
			break;
	}
}
void Activity(){
	cout<<"*****WELCOME TO THE STUDENT DASH BOARD*******\n\n";
	cout<<"Below are the ***DASHBOARD **** services\n\n";
	cout<<"1.QUIZ/EXAMINATION Service\n2.DATA UPDATING Service \n3.RESULTS DISPLAY\n4.EXIT\n";
	int z; cin>>z;
	switch(z){
		case 1:
			cout<<"***********************************QUIZ***********************************\n\n";
          	cout<<"Questions will be displayed Including MCQS and TRUE/FALSE\nN.B: No Trace Back is allowed\n\n";
          	prompt();
			break;
		case 2:
			Admin();
			Exit();
			break;
		case 3:
			cout<<"MARKS: "<<sum;
			Exit();
			break;
		case 4:
				Exit();
			break;
		default:
			cout<<"Please Enter the Appropriate option Next time";
				Exit();
			break;
	}
}
int main(){
	Activity();
}

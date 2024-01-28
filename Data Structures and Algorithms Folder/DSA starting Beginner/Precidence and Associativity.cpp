#include<iostream>
using namespace std;

int main(){
	//A Set of rules followed to solve a given Problem.
	//It is more like BODMAS.
	//Precedence: Decides which operation is done First.
	//Associativity: Demacates the order of Solving the given problem.
	
	int a {6};
	int b {3};
	int c {8};
	int d {9};
	int e {3};
	int f {2};
	int g {5};
	
	int result = a+b *c -d/e -f +g;
	cout<<"The Result is Oui"<<result<<endl;
	
	result=a/b*c +d-e+f;
	cout<<"The Result is Oui "<<result<<endl;
	
	result=(a+b)*c-d/e-f+g;
	cout<<"The Result is Oui  "<<result<<endl;
	
	///Have Added A little Section of Postfix and Prefix.
	int value{45};
	value +=5;
	cout<<"The Value Is "<<value<<endl;
	
	value -=5;
	cout<<"The Value Is "<<value<<endl;
	
	value *=2;
	cout<<"The Value Is "<<value<<endl;
	
	value /=3;
	cout<<"The Value Is "<<value<<endl;
	
	value /=11;
	cout<<"The Value Is "<<value<<endl;
	
	//In the above, the value keeps on Updating the Value in the variable
	//value
}

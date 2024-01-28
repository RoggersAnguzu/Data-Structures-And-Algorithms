#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x {67};int y{2};int z=-6;
	cout<<cos(x)<<endl;
	cout<<pow(x,y)<<endl;
	cout<<sqrt(y)<<endl;
	cout<<max(x,y)<<endl;
	cout<<min(x,y)<<endl;
	cout<<tan(y)<<endl;
	cout<<pow(y,3)<<endl;
	
	double weight{7.7};
	cout<<"Weight Rounded to floor is: "<<floor(weight)<<endl;
	
	cout<<"Weight Rounded to Ceil is: "<<ceil(weight)<<endl;
	
	cout<< abs(z)<<endl;
	
	cout<<round(weight)<<endl;// This follows the Right Rounding of max 5
} 

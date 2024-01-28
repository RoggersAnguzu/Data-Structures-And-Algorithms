 #include<iostream>
using namespace std;

size_t i{1};
const size_t COUNT{10};

int main(){
		/*
	int x=1;
	while(x<=10){
		cout<<x<<"\n";
		x++;
	}
	
	*/
	//BELOW IS A BETTER VERSION OF DOING THE ABOVE CODING	

      while(i<COUNT){
            cout<<i<<".I Love C++"<<endl;
            ++i;
      }
      cout<<"Thanks So much. The Loop is Done"<<endl;     
}

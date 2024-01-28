#include <iostream>
#include<string>

using namespace std;

int main(){
      //POINTERS

       int var{43};
       int * p_numbera {&var};

       int b{90};
       int * p_fractionalnumber{&b};
       
	  
	   cout<<sizeof(p_numbera)<<endl;
       cout<<"The Location is : "<<p_numbera<<endl;
      
       cout<<sizeof(p_fractionalnumber)<<endl;
       cout<<"The Location is  : "<<p_fractionalnumber<<endl;
       
       cout<<"The Value of Var is "<<*p_numbera<<endl; //Dereferencing
       
         char *p1{};

      char x{'A'};

      p1=&x;

      cout<<"The Value Stored in p1 Pointer is "<<*p1<<endl;

      cout<<"The Memory address is "<<p1<<endl;
      
      //Below Show Non String Modification With Pointers
      
       char *message{"Mandazi!"};

      cout<<"Message: "<<message<<endl;
      
}

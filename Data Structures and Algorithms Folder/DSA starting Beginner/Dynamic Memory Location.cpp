#include <iostream>
#include<string>

using namespace std;

int main(){
      
     
      int number{22}; 
      int *p_number=&number;

      cout<<endl;
      cout<<"Declaring Pointers and Assigning Addresses: "<<endl;
      cout<<"NUmber: "<<number<<endl;
      cout<<"P_number: "<<p_number<<endl;
      cout<<"&Number: "<<&number<<endl;
      cout<<"*pnumber: "<<*p_number<<endl;

      int *p; //Un Initialised Pointer Contains Junk Addresses.
      int one{12};
      p=&one;

      cout<<endl;
      cout<<"Uninitialised Pointer: "<<endl;
      cout<<"*P: "<<*p<<endl;

       //Dynamic Memory Allocation.
       int *memo{nullptr};
       memo=new int;
      *memo=77; //Wriring into Dynamically Allocated memory.
      cout<<endl;
      cout<<"Dynamically Allocating Memory."<<endl;
      cout<<"memo: "<<*memo<<endl;

      //Releasing Memory to the OS;

      delete memo;
      memo = nullptr; //It is better to release Memory after Using.

      //
      int *geek{new int(20)}; //This is a better way of using a pointer and then allocating Values to it too.

}

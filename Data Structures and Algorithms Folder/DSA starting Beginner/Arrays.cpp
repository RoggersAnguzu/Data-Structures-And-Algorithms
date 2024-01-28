#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
      //Working With the Arrays Section.
      /*      int scores[10]{20,21,22,23};//An array with 10 Integer Values.
      cout<<"We Are Now Reading Out Score Values: "<<endl;
      cout<<"Scores[0]: "<<scores[0]<<endl;
      cout<<"Scores[1]: "<<scores[2]<<endl;*/

                      
                      //OPTION 2.
      int scores[10];
      cout<<"Please Write data in Array Using Loop"<<endl;

      //Write data
      for(size_t i{0};i<10;++i){
            scores[i]=i*3;
      }
      // Read Data out.
      for(size_t i{0};i<10;++i){
            cout<<"Scores ["<<i<<"] : "<<scores[i]<<endl;
      }
      cout<<"Thanks So Much"<<endl;
      cout<<"================================================"<<endl;
      //An Another Example Using Employees Salary.
      double salaries[5]{12.7, 7.5, 13.2, 8.1, 9.3};
      cout <<"BELOW IS THE EMPLOYEES SALARY"<<endl;

      for(size_t x{};x<5;++x){
            cout <<"Salary["<<x<<"]: "<<salaries[x]<<endl;
      }
      cout<<"================================================"<<endl;
      
      /*//It is also possible not to declare the Array Size and the compiler will run depending on the Numbers of the Items in the  Array For Example :
      cout<<"BELOW IS THE SECTION FOR NOT DECLARING THE SIZE OF THE ARRAY"<<endl;
      int numbers[10]={10,20,30,40,50,60,70};
      
      for(auto value : numbers){
            cout<<"Value is: "<<value<<endl;
      }*/
    }
 

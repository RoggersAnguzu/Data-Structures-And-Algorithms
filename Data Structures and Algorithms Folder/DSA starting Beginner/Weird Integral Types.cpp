#include <iostream>
#include <cmath>
using namespace std;
int main(){
short int var1{10};
short int var2{20};

char var3{40};
char var4{50};

cout<<"The Size of Var1 is: "<<sizeof(var1)<<endl;
cout<<"The Size of Var2 is: "<<sizeof(var2)<<endl;
cout<<"The Size of Var3 is: "<<sizeof(var3)<<endl;
cout<<"The Size of Var4 is: "<<sizeof(var4)<<endl;

auto int result1=var1 + var2;
auto int result2=var3 + var4;

cout<<"The Size of Result1 is: "<<sizeof(result1)<<endl;

cout<<"The Size of Result2 is: "<<sizeof(result2)<<endl;


}

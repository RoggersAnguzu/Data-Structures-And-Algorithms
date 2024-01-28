
#include <iostream>
using namespace std;

int main(){

            //REFERENCES. Declaring and Using a Reference.

            int intValue{45};
            double doubleValue{33.65};

            int& x{intValue};
            double&y{doubleValue};

            cout<<"The Integer Value is:  "<<intValue<<endl;
            cout<<"The Double Value is:  "<<doubleValue<<endl;

            cout<<"The Integer Value is:  "<<x<<endl;
            cout<<"The Double Value is:  "<<y<<endl;

             cout<<"The Integer Value is:  "<<&x<<endl;
            cout<<"The Double Value is:  "<<&y<<endl;

            intValue=89;
            doubleValue=45.778;

            cout<<"========================="<<endl;
            cout<<"The Integer Value is:  "<<intValue<<endl;
            cout<<"The Double Value is:  "<<doubleValue<<endl;

            cout<<"The Integer Value is:  "<<intValue<<endl;
            cout<<"The Double Value is:  "<<doubleValue<<endl;

             cout<<"The Integer Value is:  "<<&x<<endl;
            cout<<"The Double Value is:  "<<&y<<endl;

            x=45;
            y=71.908;

            cout<<"========================="<<endl;
            cout<<"The Integer Value is:  "<<intValue<<endl;
            cout<<"The Double Value is:  "<<doubleValue<<endl;

            cout<<"The Integer Value is:  "<<x<<endl;
            cout<<"The Double Value is:  "<<y<<endl;

             cout<<"The Integer Value is:  "<<&x<<endl;
            cout<<"The Double Value is:  "<<&y<<endl;

            return 0;
           
}

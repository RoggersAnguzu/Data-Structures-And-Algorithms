#include<iostream>
using namespace std;
//QUESTION ONE OF INSERING A NEW ELEMENT 
int n,x,delet;
double Numbers[200];

void inputting(){
    cout<<"How many Numbers are you Entering?: "<<endl;
    cin>>n;
    cout<<"Enter the Values Now: "<<endl;
    for(int i=0;i<n;i++){
        cin>>Numbers[i];
    }
}

void outputting(){
    for(int i=0;i<n;i++){
        cout<<Numbers[i]<<" "<<endl;
    }
}

void searching(){
    cout<<"Enter the Number you want to Search Please: "<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==Numbers[i]){
            cout<<"The Element ["<< x<<"] has been found at index ["<<i<<"]"<<endl;
            cout<<"Enter the Value to replace it with:";
            int replace;cin>>replace;
            Numbers[i]=replace;
        }
    }
}

int main(){
    inputting();
    searching();
    outputting();    
    return 0;
}


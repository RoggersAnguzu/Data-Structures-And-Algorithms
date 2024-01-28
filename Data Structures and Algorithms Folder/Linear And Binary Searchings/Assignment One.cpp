#include<iostream>
using namespace std;
                                        //QUESTION ONE OF DELETING THE FOUND ELEMENT
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
    for(int k=0;k<n;k++){
        cout<<Numbers[k]<<" "<<endl;
    }
}

void searching(){
    cout<<"Enter the Number you want to Search Please: "<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==Numbers[i]){
            cout<<"The Element ["<< x<<"] has been found at index ["<<i<<"]"<<endl;
            int decision;
            cout<<"Would you like to delete a Number from the Array? \n1. Yes\n2. No:"<<endl;
            cin>>decision;
        switch(decision){
            case 1:
                cout<<"Enter the Number you want to delete: "<<endl;
                cin>>delet;
                if(delet==Numbers[i]){
                    for(int j=i;j<n;j++){
                        Numbers[j]=Numbers[j+1];
                    }
                    n--;
                }
                break;
            case 2:
                cout<<"Thanks for Using Our System";
                break;
            default:
                cout<<"Enter the Correct Option "<<endl;
                break;
        }
        }
    }
    if(n==0){
        cout<<x<<" Has not Been Found"<<endl;
    }
}

int main(){
    inputting();
    searching();
    outputting();    
    return 0;
}


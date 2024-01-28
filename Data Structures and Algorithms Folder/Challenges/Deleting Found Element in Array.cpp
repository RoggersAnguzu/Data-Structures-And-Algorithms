#include<iostream>
using namespace std;

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
         		cout<<"The Element ["<< x<<"] has been found at index ["<<i<<"] and deleted"<<endl;
		             if(x==Numbers[i]){
		                    for(int j=i;j<n-1;j++){
		                        Numbers[j]=Numbers[j+1];
		                    }
		                    n--;
						}
			}
    	}
    }

int main(){
    inputting();
    searching();
    outputting();    
    return 0;
}


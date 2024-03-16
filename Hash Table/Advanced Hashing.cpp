#include<iostream>
#include<vector>
using namespace std;

class Hashtable{
	int tablesize;
	vector<int> *table;
	
	public:
		Hashtable(int size){
			this->tablesize=size;
			table=new vector<int>[tablesize];
		}
	
	int hashfunction(int key){
		return ((2*key +3)% tablesize);
	}
	
	void insertValues(int key){
		int index=hashfunction(key);
		table[index].push_back(key); // Placing Values a Particular index.
	}
	void display(){
		for(int i=0;i<tablesize;i++){
			cout<<i<<":";
			
			for(int x:table[i]){ //Enhanced For Loop.
				cout<<"-->"<<x; //Continously Checking Values at a given index
				cout<<"\n";
			}
		}
	}
};

int main(){
	int i,n,size,x;
	cout<<"Enter the Table Size. ";
	cin>>size;
	Hashtable h(size);
	
	cout<<"How many Many Values are you Entering: ";
	cin>>n;
	cout<<"Enter the Values";
	for(int i=0;i<n;i++){
		cin>>x;
		h.insertValues(x);
		
	}
	h.display();
}

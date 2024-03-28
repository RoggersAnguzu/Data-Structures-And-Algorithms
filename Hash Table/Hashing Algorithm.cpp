#include<iostream>
#include<vector> // Demacates the Vector.
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
		return (key% tablesize);
	}
	
	void insertValues(int key){
		int index=hashfunction(key);
		table[index].push_back(key); // Placing Values a Particular index.
	}
	void display(){
		for(int i=0;i<tablesize;i++){
			cout<<i<<":";
			
			for(int x:table[i]){ //Enhanced For Loop.
				cout<<x<<"--->"; //Continously Checking Values at a given index
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
	
	cout<<"How Many Values are you Entering: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter the Values";
		cin>>x;
		h.insertValues(x);
		
	}
	h.display();
}
/* The Data can then be  stored and accessed in two main ways ie:
i) Linear Probing/Open addressing: This is where the the values are accesses and and stored upwards or downwards.
ii)Separate Chaining/Crossed addressing. This is where the data can be stored and accessed horizontally from the main Node.
*/


#include <iostream>
using namespace std;

int main(){

            size_t size{10};
            //DYNAMIC ARRAYS
            int *salaries=new int[size];// Gabbage Values.
            int *student {new(nothrow) int[size]{}};//All the Values are Initialised to 0
            double *score{new(nothrow) double[size]{8,200,37,49,56}};

            if(score){
                  cout<<"The Size of the Scores is: "<<sizeof(score)<<endl;
                  cout<<"Memory Has been Allocated Successfully"<<endl;

                  for(size_t i{};i<size;++i){
                        cout<<"Score: "<<score[i]<<" : "<<*(score+i)<<endl;
                  }
            }
            delete [] score;
            score=nullptr;

            delete [] student;
            student=nullptr;

            delete [] salaries;
            salaries=nullptr;

            return 0;
           
}

#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};
  
       for (int i =0; i< 5; i++){
        cout << "brewing " << teaTypes[i] << endl;

        for(int j=1; j<=3 ;j++){
            cout << "brewing" << j  << "for " << teaTypes[i] << endl;
        };
       };
    return 0;

}
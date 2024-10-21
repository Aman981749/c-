#include <iostream>
#include <string>
using namespace std;
int main(){

    string input;

    string teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};
      int i=0;
    for(int i=0; i< 4 ;i++){
        if(teaTypes[i]== "Green Tea"){
            continue;
        }

        cout << "brewing teas " << teaTypes[i] << endl;
    };

    return 0;
}
#include <iostream>
#include <string> 

using namespace std;



int main(){

    int teacups;
    cout<< "enter the number of tea cups" << endl;
    cin >> teacups;

    while(teacups >0){
        teacups--;
        cout << "serving tea " << teacups << "remaining" << endl;
    }

    

    return 0;
}
#include <iostream>
#include <string> 

using namespace std;

int main(){

     double greenTea = 3.0;
     double  blackTea = 4.0;
     double  OblingTea = 5.0;
     int answer;

    cout << "1. for Green Tea \n";
    cout << "2. for Black Tea \n";
    cout << "3. for OBlong Tea \n";
    cin >> answer;

    switch(answer){
        case 1:
        cout<< "you have selected Green Tea price is " << greenTea << endl;
        break;
        case 2:
        cout<< "you have selected Black Tea price is " << blackTea << endl;
        break;
        case 3:
        cout<< "you have selected Oblong Tea price is " << OblingTea << endl;
        break;
        default:
        cout<< "you have selected none " << endl;
        
    };
    

    return 0;
}
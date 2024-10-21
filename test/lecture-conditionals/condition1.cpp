#include <iostream>
#include <string> 

using namespace std;

int main(){

    int answer;

    cout << "whats the time now in hours (0-23) \n";
    cin  >> answer ;

     if(answer>8 && answer<18){

    cout<< "shop is open you can get your tea" << endl;
     }else{
    cout<< "shop is closed  "  << endl;

     }



    return 0;
}
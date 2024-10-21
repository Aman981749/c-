#include <iostream>
#include <string> 

using namespace std;



int main(){

    string userinput;


    do{
        cout << "do you want more tea ?"<<endl;
        cin >> userinput;


    }while( userinput != "no");

    

    return 0;

   
}
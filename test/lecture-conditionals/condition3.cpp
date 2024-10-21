#include <iostream>
#include <string> 

using namespace std;

int main(){

    double cups;
    double finalprice;
    double price= 10.0;

    cout << "how many tea cup you want  \n";
    cin  >> cups ;

     if(cups>10 && cups<=20){

        finalprice = price * cups *0.90;
       cout<< "applied 10% discount pirce to pay  " << finalprice << endl;

     }else if(cups >20){

        finalprice = price * cups *0.80;
       cout<< "applied 20% discount pirce to pay  " << finalprice << endl;


     }else{
        
        finalprice = price * cups;
        cout<< "applied no discount pirce to pay  " << finalprice << endl;

     };
   
    return 0;
}
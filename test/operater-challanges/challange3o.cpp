#include <iostream>
#include <string> 

using namespace std;

int main(){

    int years;
    
    int cups;
    int price= 10;
    int totalprice;

    cout << "how many years you have been member if more than one enter  \n";
    cin >> years;

    cout << "how many cups you want \n";
    cin >> cups;


    if(years >1 || cups >12){
       totalprice = price * cups * 0.90;
    }else{
      totalprice= price * cups;
    };

    cout << "total price is " << totalprice;




    

    return 0;
}
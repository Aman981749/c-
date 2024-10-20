#include <iostream>
#include <string> 

using namespace std;

int main(){

    int teapack;
    
    int totalteabags;

    cout << "how many tea bags you have \n";
    cin >> teapack;

    if(teapack <20){
       teapack+= 10 ;
    }else{
      teapack;
    }

    cout << "total teabags " << teapack;




    

    return 0;
}
#include <iostream>
#include <string> 

using namespace std;

int main(){

    int teapack;
    float priceperpack;
    int totalprice;

    cout << "how many tea packs \n";
    cin >> teapack;

    cout << "how many priceperpack \n";
    cin >> priceperpack;


    totalprice = teapack * priceperpack * 1.10 ;

    cout << "your total price with tax is " << totalprice;




    

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
    int price , money ,change ,bankT , bankF , bankH , bank5 , bank2 , bank1 , c10,c5,c1 ;
   

    cout << "Enter price : " ;
    cin >> price;
    cout << "Enter Money : " ;
    cin >> money;
    change = price - money ;
    cout << change ;

    cout<<"Product is \t" << productname << " \t\tBaht" <<endl;
    cout<<"Price =  \t" << price << " \t\tBaht" <<endl;
    cout<<"Discount = \t" << sale<< " \tBaht"  <<endl ;
    cout<<"NetPrice = \t" << net<< " \tBaht"  <<endl;

    system("pause");
    return(0);
}

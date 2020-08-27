#include <iostream>
#include <string>
using namespace std;
int main(){
    int price ;
    float  discount,sale,net;
    string productname;
    cout << "Enter product name : " ;
    cin >> productname;
    cout << "Enter price : " ;
    cin >> price;
    cout << "Enter discount (%) : " ;
    cin >> discount;
    sale = price * (discount/100);
    net = price - sale;
    cout<<"Product is \t" << productname << " \t\tBaht" <<endl;
    cout<<"Price =  \t" << price << " \t\tBaht" <<endl;
    cout<<"Discount = \t" << sale<< " \tBaht"  <<endl ;
    cout<<"NetPrice = \t" << net<< " \tBaht"  <<endl;

    system("pause");
    return(0);
}

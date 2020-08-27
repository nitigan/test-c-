#include <iostream>
#include <string>
using namespace std;
int main(void){

    int price,money,change,bankT=0 , bankF=0 , bankH=0 , bank5=0 , bank2=0 , bank1=0 , c10=0,c5=0,c1=0 ;
    cout<<"Enter Total Price : ";
    cin >> price ;
    cout<<"Enter Money from Customer : ";
    cin >> money ;
    change = money - price ;
    cout<<"Change = "<<change<<endl;

    while (change > 0)
    {
        if(change >= 500 ){
            change = change - 500;
            bankF = bankF + 1 ;
        }else if(change >=100 ){
            change = change-100;
            bankH = bankH + 1 ;
        }else if(change >=50 ){
            change = change-50;
            bank5 = bank5 + 1 ;
        }else if(change >=20 ){
            change = change-20;
            bank2 = bank2 + 1 ;
        }else if(change >=10 ){
            change = change-10;
            c10 = c10 + 1 ;
        }else if(change >=5 ){
            change = change-5;
            c5 = c5 + 1 ;
        }else if(change >=1 ){
            change = change-1;
            c1 = c1 + 1 ;
        }

    }
    cout<<"Bank 500 \tBaht = "<<bankF<<endl;
    cout<<"Bank 100 \tBaht = "<<bankH<<endl;
    cout<<"Bank 50 \tBaht = "<<bank5<<endl;
    cout<<"Bank 20 \tBaht = "<<bank2<<endl;
    cout<<"Coin 10 \tBaht = "<<c10<<endl;
    cout<<"Coin 5 \t\tBaht = "<<c5<<endl;
    cout<<"Coin 1 \t\tBaht = "<<c1<<endl;
    system("pause");
}
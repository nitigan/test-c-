#include<iostream>
using namespace std;

double discount(double amount){
    return amount* .05;
}

double discount(double amount,double rate){
    return amount *rate;
}

double discount(double amount, string level){
    double rate = 0;
    if(level == "gold"){
        rate = .2;
    }else if(level == "silver"){
        rate = .1 ;
    }
    return amount * rate;
}

int main(void){
    cout << discount(100) << endl ;
    cout << discount(100 , .5) <<endl;
    cout << discount(100 , "gold")<<endl;
    system("pause");
    return 0;
}

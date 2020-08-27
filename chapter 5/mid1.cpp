#include <iostream>
#include <string>
using namespace std;
int main(void){

    int x;
    cout<<"Enter x : ";
    cin >> x ;

    if(x > 0){
        cout<<"POSITIVE"<<endl;
    }else if( x < 0){
        cout <<"NAGATIVE"<<endl;
    }else{
        cout<<"ZERO"<<endl;
    }


    system("pause");
}
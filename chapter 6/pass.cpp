#include <iostream>
using namespace std;

void demo(int v , int &r){

    cout<<"inside Demo() -- before change value"<< endl;
    cout<<"v = " << v << ", Address = " <<&v << endl;
    cout<<"r = " << r << ", Address = " <<&r << endl;
    cout<< endl;
    v = v +10 ;
    r = r + 10 ;

    cout<<"inside demo() -- after change value"<< endl;
    cout<<"v = " << v << ", Address = " <<&v << endl;
    cout<<"r = " << r << ", Address = " <<&r << endl;
    cout<< endl;
}

int main(void){
    int v = 7;
    int r = 7;

    cout<<"inside main() -- before calling Demo()"<< endl;
    cout<<"v = " << v << ", Address = " <<&v << endl;
    cout<<"r = " << r << ", Address = " <<&r << endl;
    cout<< endl;

    demo(v,r);

    cout<<"inside main() -- After calling Demo()  "<< endl;
    cout<<"v = " << v << ", Address = " <<&v << endl;
    cout<<"r = " << r << ", Address = " <<&r << endl;
    cout<< endl;

    //cout<<"v = " << v << endl;
    //cout<<"r = " << r << endl;


    system("pause");
}
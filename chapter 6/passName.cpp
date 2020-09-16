#include <iostream>
using namespace std;

void name(string &s){

    if(s == "peter"){
        s = "Spiderman";
    }else if (s == "bruce"){
        s = "Batman";
    }else if (s == "clark"){
        s = "Superman";
    }else{
        s = "Unknown";
    }
}

int main(void){

    string s = "peter";
    cout << s ;
    name(s);
    cout << " = " << s << endl;

    system("pause");
}
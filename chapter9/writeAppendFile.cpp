#include<iostream>
#include<fstream>

using namespace std;

void demo1(){
    ofstream f("menu.txt", ios::app);//app=append
    if(f){
        f<<"mocha"<<endl;
        f<<"latte"<<endl;
        cout<<"Successfully append menu."<<endl;
    }else{
        cout<<"Error File IO"<<endl;
    }
    f.close();
}
void demo2(){
    //ofstream f("menu.txt", ios::app);//app=append
    ofstream f("menu2.txt", ios::app);//app=append
    if(f){
        f<<"green tea"<<endl;
        f<<"jasmine tea"<<endl;
        f<<"rose tea"<<endl;
        cout<<"Successfully append menu."<<endl;
    }else{
        cout<<"Error File IO"<<endl;
    }
    f.close();
}

int main(void){
    //demo1();
    demo2();
    system("pause");
    return(0);
}
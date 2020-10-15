#include<iostream>
#include<fstream>
using namespace std;

void demo1(){
    int n = 5 ;
    for (int i = 1; i <= 12; i++)
    {
        cout << n << " x "<< i << " = "<< n*i<<endl;
    }
    
}
void demo2(){
    ofstream f("demo2.txt");
    int n = 5 ;
    for (int i = 1; i <= 12; i++)
    {
        f << n << " x "<< i << " = "<< n*i<<endl;
    }
    f.close();
    
}
void demo3(){
    //ofstream f("g:/demo3.txt");
    ofstream fout("demo3.txt");

    if(fout){
        int n = 5 ;
            for (int i = 1; i <= 12; i++)
            {
                fout << n << " x "<< i << " = "<< n*i<<endl;
            }
            cout<<"Write File Successfully"<<endl;
    }else{
        cout<<"Write File Error"<<endl;
    }
    fout.close();
}

int main(){
    //demo1();
    //demo2();
    demo3();
    system("pause");
    return(0);
}
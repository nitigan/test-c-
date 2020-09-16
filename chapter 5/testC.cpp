#include <iostream>
using namespace std;

int main(){
    int j = 1 ,i =1,time=0 ,n=7;

       while(i <= n){
           i = i + 1;
           j = j * i ; 
           time++;
           cout <<"Time "<<time << " : j = "<< j <<endl;
       }
        //cout << j <<endl;
    system("pause");
    return 0;
}
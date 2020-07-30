#include<iostream>
using namespace std;
int input();
int sum(int data1 , int data2);
void display(int sumNum);
int main(){
    int number1 = input(); 
    int number2 = input();
    int Total = sum(number1,number2);
    display(Total);
    system("pause");
    return(0);
}
void display(int sumNum){
    cout<<"Total of Num1 and Num2 = " << sumNum <<endl;
}

int sum(int data1,int data2){
    return(data1+data2);
}
int input(){
    cout<<" Function Show Num 1 "<<endl;
    int num1;
    cout<<"test function" << endl ;
    cout<<" Enter Number 1 : " ;
    cin >> num1 ;
    return(num1);
}

// Passing arrays and individual element to function
#include <iostream>
using namespace std;
void PassByArray(int Temp[]);
void PassByElement(int Temp);
int main()
{
    int Data[] = { 1, 2, 3, 4, 5 };
    cout << "Effects of passing entrie array pass-by-reference.\n";
    cout << "Original array's value : ";
    for(int i = 0 ; i < 5 ; i++)
        cout << Data[i] << " ";
    cout << endl;
    // array is passed pass-by-reference
    PassByArray(Data); 
    cout << "Pass by array's value : ";

    for(int i = 0 ; i < 5 ; i++)
        cout << Data[i] << " ";
    cout << endl << endl;

    cout << "Effects of passing array element pass-by-value.\n";
    cout << "Data[3] before pass by element : ";
    cout << Data[3] << endl;

    PassByElement(Data[3]); // array element is passed pass-by-value
    cout << "Data[3] after pass by element : ";
    cout << Data[3] << endl << endl;
    system("pause");
    return(0);
}
void PassByArray(int Temp[ ])
{
    for(int j = 0 ; j < 5 ; j++)
        Temp[j] *= 2;
}
void PassByElement(int Temp)
{
    Temp *= 2;
}
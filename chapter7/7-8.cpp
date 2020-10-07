#include <iostream>
#include <string>
using namespace std;
void SortString(char Data[][20]);
void SortStringClass(string Data[]);
int main()
{
    char City[5][20];
    string CityClass[5];

    cout << "Enter value string.\n\n";
    for(int i = 0; i < 5 ; i++)
    {
        cout << "Input name of city " << i+1 << " : ";
        cin >> City[i];
        CityClass[i] = City[i];
    }
    SortString(City);

    SortStringClass(CityClass);

    cout << "\nList name of City.\n";
    for(int i = 0; i < 5 ; i++)
    {
        cout << i+1 << "\t " << City[i];
        cout <<"\t" << CityClass[i] << endl;
    }
    system("pause");
    return(0);
}
void SortString(char Data[][20])
{
    int i,j,flag;
    char temp[20];
    for( i = 1; i < 5 ; i++)
    {
        flag = 0;
        for( j = 0; j < 5-i ; j++) {
            if (strcmp(Data[j],Data[j+1]) > 0) {
                strcpy(temp,Data[j]);
                strcpy(Data[j],Data[j+1]);
                strcpy(Data[j+1],temp);
                flag = 1;
            }
        }
    if (!flag) break;
    }
}

void SortStringClass(string Data[])
{
    int i,j,flag;
    string temp;
    for( i = 1; i < 5 ; i++)
    {
        flag = 0;
        for( j = 0; j < 5-i ; j++) {
            if (Data[j] > Data[j+1]) {
                temp = Data[j];
                Data[j] = Data[j+1];
                Data[j+1] = temp;
                flag = 1;
            }
        }
        if (!flag) break;
    }
}

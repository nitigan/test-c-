#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Number;
    string Name;
    cout << "Enter String : ";
    cin >> Name;
    cout << "Enter number : ";
    cin >> Number;
    for (int n = 1 ; n <= Number ; n++)
        cout << n << ":" << Name << endl;
    cout << endl;
    system("pause");
    return(0);
}
#include <iostream>
#include <string>
using namespace std;
int main()
{   
    cout << "Display sqaure of number 1 to 10.\n";
    cout << "================================\n";
    cout << "\tX\tX^2\n";
    cout << "================================\n";
    int X = 1;
    // display value power 2
    while (X <= 10) {
        cout << "\t" << X << "\t" << X*X << endl;
        X++;
    }
    system("pause");
    return(0);
}
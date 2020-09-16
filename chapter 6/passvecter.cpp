#include <iostream>
#include <vector>
using namespace std;

void fx(vector<double> &v, double fxRate){
    for (int i = 0 ; i <v.size() ; i++){
        v[i] = v[i] * fxRate;
    }
}

int main(void){
    vector<double> price {10, 20, 100};
    fx(price,33);
    
    for(int i = 0 ; i < price.size() ; i++){
        cout << price[i] << endl;
    }


    system("pause");
}
#include <iostream>

using namespace std;

int main(){

    int l, c, quant1=0, quant2=0;
    cin >> l >> c;

    quant1 = l*c + (l-1)*(c-1);
    quant2 = (l-1)*2 + (c-1)*2;
    cout << quant1 << "\n" << quant2 << "\n";

    return 0;
}
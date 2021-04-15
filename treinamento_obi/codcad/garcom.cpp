#include <iostream>

using namespace std;

int main(){

    int n, l, c, soma;
    n = l = c = soma = 0;

    cin >> n;
    while(n--){
        cin >> l >> c;
        if(l > c) soma += c;
    }

    cout << soma << endl;

    return 0;
}
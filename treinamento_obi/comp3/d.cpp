#include <iostream>

using namespace std;

int main(){

    int n=0, s=0, i=0;
    int movimentacao=0, menor;
    cin >> n >> s;
    menor = s;

    for(i=0; i<n; i++){
        cin >> movimentacao;
        if(movimentacao < 0) s += movimentacao;
        else s += movimentacao;
        if(s < menor) menor = s;
    }

    cout << menor << "\n";

    return 0;
}
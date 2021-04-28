#include <iostream>

using namespace std;

int main(){

    int n, i, quant = 0;
    cin >> n;
    int minas[n], tabuleiro[n];
    for(i=0; i<n; i++){
        cin >> minas[i];
        tabuleiro[i] = 0;
    }

    if(minas[0]==1){
        tabuleiro[0] += 1;
        tabuleiro[1] += 1;
    }

    if(minas[n-1]==1){
        tabuleiro[n-1] += 1;
        tabuleiro[n-2] += 1;
    }

    for(i=1; i<n-1; i++){
        if(minas[i] == 1){
            tabuleiro[i-1]++;
            tabuleiro[i]++;
            tabuleiro[i+1]++;
        }
    }

    for(i=0; i<n; i++) cout << tabuleiro[i] << endl;

    return 0;
}
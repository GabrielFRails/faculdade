#include <iostream>

using namespace std;

int main(){

    int n, i=0, j=0;
    cin >> n;
    int square[n][n], somas[(n*n)-1], soma = 0;

    for(i=0; i<n; i++){
        soma = 0;
        for(j=0; j<n; j++){
            cin >> square[i][j];
            soma += square[i][j];
        }
        somas[i] = soma;
    }

    for(i=0; i<n; i++){
        
    }

    for(i=0; i<3; i++) cout << somas[i] << " ";

    return 0;
}
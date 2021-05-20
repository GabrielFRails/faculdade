#include <iostream>

using namespace std;

int main(){

    int n, i=0, j=0;
    cin >> n;
    int square[n][n], compara = 0;
    int soma_diagonais[2] = {0, 0}, soma_linhas = 0, soma_colunas = 0;
    /*
    soma_diagonais[0] => DIAGONAL PRINCIPAL
    soma_diagonais[1] => DIAGONAL SECUNDÁRIA
    */

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> square[i][j];
            if(i==j){
                soma_diagonais[0] += square[i][j]; 
            }
            if(i+j == (n-1)){
                soma_diagonais[1] += square[i][j];
            }
            soma_linhas += square[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            soma_colunas += square[j][i];
        }
    }
    compara = soma_diagonais[0];
    if(compara == soma_diagonais[1] && compara == (soma_linhas/n) && compara == (soma_colunas/n)){
        cout << compara << endl;
    } else{
        cout << "-1" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n, i=0, j, difDireita = 0, difEsquerda = 0, menorDif = 0;
    cin >> n;
    int fita[n];
    for(i=0; i<n; i++){
        cin >> fita[i];
    }

    for(i=0; i<n; i++){
        if(fita[i] == -1){
            for(j=0; j<i; j++){
                if(fita[j] == 0){
                    difEsquerda = i - j;
                    //break;
                }  
            }
            for(j=i; j<n; j++){
                if(fita[j] == 0){
                    difDireita = j - i;
                    break;
                }
            }

            if(difEsquerda == 0) {
                menorDif = difDireita;
            }
            else if(difDireita == 0) {
                menorDif = difEsquerda;
            }
            else{
                if(difEsquerda > difDireita) menorDif = difDireita;
                else menorDif = difEsquerda;
            }

            if(menorDif > 9) menorDif = 9;
            fita[i] = menorDif;
        }

        difEsquerda = difDireita = 0;

    }

    for(i=0; i<n; i++){
        cout << fita[i] << " ";
    }

    cout << endl;

    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

double distancia_pontos(int x, int xb, int y, int yb){

    return sqrt(pow(xb-x, 2) + pow(yb-y, 2));
}

int main(){

    int casos = 0, menor_dis = 0, bola = 0, x=0, y=0, xBranca, yBranca, i = 0, j=0;
    int bolasDisp = 0;

    cin >> casos;

    for(j=0; j<casos; j++){
        cin >> bolasDisp >> xBranca >> yBranca >> x >> y;
        menor_dis = distancia_pontos(x, xBranca, y, yBranca);
        bola = 1;
        for(i=1; i<bolasDisp; i++){
            cin >> x >> y;
            if(distancia_pontos(x, xBranca, y, yBranca) < menor_dis){
                menor_dis = distancia_pontos(x, xBranca, y, yBranca);
                bola = i+1;
            }
        }

        cout << bola << "\n";
    }

    

    return 0;
}
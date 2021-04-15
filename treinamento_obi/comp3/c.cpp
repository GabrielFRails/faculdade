#include <iostream>

using namespace std;

int main(){

    int n = 0;
    while(1){
        cin >> n;
        if(n == -1) break;
        int ingressos[n], i, cont = 0, div = 0;
        for(i=0; i<n; i++){
            cin >> ingressos[i];
            div += ingressos[i];
            if(div % 100 == 0) cont++;
        }

        cout << cont << "\n";
    }

    return 0;
}
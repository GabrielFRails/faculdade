#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string c;
    int tests, i, j, length, cont = 0, max = 0, k;
    cin >> tests;

    while(cont < tests){
        if(tests == 0) break;
        cin >> length >> c;
        cout << "Case #" << cont+1 << ": ";

        for(i=0; i<length; i++){
            //k = 0;
            max = 1;
            for(j=0; j<i; j++){
                if(c[j] < c[j+1]){
                    max++;
                }
                //k++;
            }
            cout << max << " ";
        }
        cont++;
        cout << endl;
    }

    return 0;
}
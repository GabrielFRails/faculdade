#include <iostream>

using namespace std;

int main(){

    int n, i, quant = 0;
    cin >> n;
    int numbers[n];
    for(i=0; i<n; i++) cin >> numbers[i];

    for(i=0; i<n; i++){
        if(numbers[i] == 1 && i < n-2){
            if(numbers[i+1]==0 && numbers[i+2]==0){
                quant++;
            }
        }
    }

    cout << quant << endl;

    return 0;
}
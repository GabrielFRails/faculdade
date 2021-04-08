#include <iostream>

using namespace std;

int main(){
    
    int n = 0;
    cin >> n;

    if(n == 0) cout << "nulo\n";
    else if(n < 0) cout << "negativo\n";
    else cout << "positivo\n";

    return 0;
}
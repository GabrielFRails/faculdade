#include <iostream>

using namespace std;

int main(){

    int n1 = 0, n2 = 0; 
    cin >> n1 >> n2;
    int media = (n1+n2) / 2;

    if(media >= 7) cout << "Aprovado\n";
    else if(media < 7 && media >= 4) cout << "Recuperacao\n";
    else if(media < 4) cout << "Reprovado"; 

    return 0;
}
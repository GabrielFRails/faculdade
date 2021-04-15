#include <iostream>

using namespace std;

int main(){

    long long acessos = 0, total = 0;
    int n = 0, dias = 0, i = 0;
    cin >> n;

    while(n--){
        cin >> acessos;
        total += acessos;
        if(total >= 1000000) dias = i+1;
        else i++;
    }
    cout << dias << endl;

    return 0;
}
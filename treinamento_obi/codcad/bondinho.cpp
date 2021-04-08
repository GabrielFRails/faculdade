#include <iostream>

using namespace std;

int main(){

    int A, M;
    A = M = 0;
    cin >> A >> M;

    if(A+M > 50){
        cout << "N\n";
    } else cout << "S\n";

    return 0;
}
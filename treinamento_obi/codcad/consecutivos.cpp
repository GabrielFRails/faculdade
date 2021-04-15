#include <iostream>

using namespace std;

int main(){

    int i, j, n, maior_seq = 0;
    cin >> n;
    int v[n];

    for(i=0; i<n; i++) cin >> v[i];

    for(i=0; i<n; i++){
        j = i;
        for(; j<n && v[i] == v[j]; j++);
        maior_seq = max(maior_seq, j-i);
    }

    cout << maior_seq << endl;
    return 0;
}
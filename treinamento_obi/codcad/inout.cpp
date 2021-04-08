#include <iostream>

using namespace std;

int main(){

    int raio = 0;
    cin >> raio;
    double pi = 3.14159;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "valor do raio: " << raio << " \nValor area: " << pi*raio*raio << "\n";

    return 0;
}
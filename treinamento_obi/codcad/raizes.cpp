#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    float number;
    cin >> n;

    while(n--){

        cin >> number;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(number) << endl;
    }

    cout << endl;

    return 0;
}
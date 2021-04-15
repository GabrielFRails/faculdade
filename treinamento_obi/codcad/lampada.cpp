#include <iostream>

using namespace std;

int main(){

    int l[2] = {0, 0}, n, in;
    cin >> n;

    while(n--){
        cin >> in;

        if(in == 1){
            if(l[0] == 0) l[0] = 1;
            else l[0] = 0;
        }
        
        if(in == 2){
            if(l[0] == 0) l[0] = 1;
            else l[0] = 0;

            if(l[1] == 0) l[1] = 1;
            else l[1] = 0;
        }   
    }

    cout << l[0] << "\n" << l[1] << endl;

    return 0;
}
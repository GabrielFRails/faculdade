#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*b==c*d || a*c==b*d || a*d==b*c)
    {
    	cout<<"S\n";
    }else
    {
    	cout<<"N\n";
    }
    return 0;
}
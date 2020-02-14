#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    int a, b, cap=0, onl=0, n;
    cin>>n;
    while(cin>>a>>b){
        onl= onl -a+b;
        cap=max(cap, onl);
    }
    cout<<cap;
    return 0;
}

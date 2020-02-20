#include <bits/stdc++.h>

using namespace std;
bool KT(int n){
    bool k[10];
    memset(k, false, sizeof k);
    while(n!=0){
        if(!k[n%10]) k[n%10]=true;
        else return false;
        n/=10;
    }
    return true;
}
int main()
{
    freopen("a.inp", "r", stdin);
    int n;
    cin>>n;
    n++;
    for(n; true; n++){
        if(KT(n)){
            cout<<n;
            return 0;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    long long a, b, ans=1, t=3, tt=2;
    cin>>a>>b;
    for(int i=1; true; i++){
        if(a*t > b*tt){
            cout<<ans;
            return 0;
        }
        t*=3;
        tt*=2;
        ans++;
    }
    return 0;
}

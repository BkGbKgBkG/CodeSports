#include <bits/stdc++.h>

using namespace std;
int n ,m, ans;
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    if(n%2==0){
        ans = (n/2)*m;
    }
    else{
        ans=(n/2)*m;
        ans+= m/2;
    }

    cout<<ans;
    return 0;
}

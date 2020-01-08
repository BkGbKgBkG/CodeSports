#include <bits/stdc++.h>

using namespace std;
int n, k, a[10000], ans;
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    bool kt=false;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>0) kt=true;
    }
    if(!kt){
        cout<<0;
        return 0;
    }
    for(int i=1; i<=n; i++){
        if(a[i]>=a[k] &&a[i]>0 ) ans++;
    }
    cout<<ans;
    return 0;
}

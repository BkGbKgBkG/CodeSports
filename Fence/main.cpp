#include <bits/stdc++.h>

using namespace std;
int n, k, h[200005], ans;
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    int f[200005], tmp=INT_MAX;
    memset(f, 0 , sizeof f);
    for(int i=1; i<=n; i++){
        cin>>h[i];
        f[i]=f[i-1]+h[i];
    }
    for(int i=1; i<=n-k+1; i++){
        if(tmp > f[i+k-1]-f[i-1]){
            tmp = f[i+k-1]-f[i-1];
            ans = i;
        }
    }
    cout<<ans;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int n, a, c[10000];
int main() {
    freopen("a.inp", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++) {
        cin>>a;
        c[a]++;
    }
    ans = c[4]+c[3]+c[2]/2;
    c[1]-=c[3];
    if(c[2]%2==1){
        ans++;
        c[1]-=2;
    }
    if(c[1]>0){
        ans+= (c[1]+3)/4;
    }

    cout<<ans;
    return 0;
}

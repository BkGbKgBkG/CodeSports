#include <bits/stdc++.h>

using namespace std;
int n, k, a[505], ans, b[505];
int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }
    int tmp;
    for(int i=1; i<n; i++) {
        if(a[i]+a[i+1] <k) {
            tmp = k-a[i]-a[i+1];
            ans+= tmp;
            a[i+1]+=tmp;
        }
    }
    cout<<ans<<endl;
    for(int i=1; i<=n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}

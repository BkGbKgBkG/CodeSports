#include <bits/stdc++.h>
#define re return
using namespace std;
int n, a[1000007], q;
long long m;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    cin>>q;
    for(int i=1; i<=q; i++){
        cin>>m;
        cout<<upper_bound(a+1, a+1+n, m)-a-1<<endl;
    }

    return 0;
}

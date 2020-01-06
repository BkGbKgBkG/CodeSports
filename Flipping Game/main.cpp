#include <bits/stdc++.h>

using namespace std;
int n;
int a[201], f[501];

int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    cin>>n;
    int ca=0, cb=0, maxcb=-1;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==1){
            ca++;
            if(cb>0) cb--;
        }
        if(a[i]==0){
            cb++;
            maxcb= max(maxcb, cb);
        }
    }
    int ans=0;
    ans=ca+maxcb;
    cout<<ans;
    return 0;
}

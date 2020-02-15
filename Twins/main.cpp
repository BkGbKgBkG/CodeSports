#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    int n, a[101], s =0, t=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a+1, a+1+n, greater<int>());
    for(int i=1; i<=n; i++){
        t+= a[i];
        if(t > s-t){
            cout<<i;
            return 0;
        }
    }
    return 0;
}

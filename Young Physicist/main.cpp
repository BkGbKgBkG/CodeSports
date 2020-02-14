#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    int a, b, c, aa=0, bb=0, cc=0, n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        aa+= a;
        bb+= b;
        cc+= c;
    }
    cout<<(aa==0 && bb==0 && cc==0 ? "YES" : "NO");
    return 0;
}

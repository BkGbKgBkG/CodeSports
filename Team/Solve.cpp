#include<bits/stdc++.h>
using namespace std;
int n, a, b, c, ans;
int main()
{
    freopen("in.inp", "r", stdin);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a>>b>>c;
        if(a+b+c >=2) ans++;
    }
    cout<<ans;    
    return 0;
}

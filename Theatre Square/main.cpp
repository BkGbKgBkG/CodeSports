#include <bits/stdc++.h>

using namespace std;
long long n, m, a, ans;
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>a;

    if(n%a==0) ans=n/a;
    else ans=n/a+1;

    if(m%a==0) ans*=(m/a);
    else ans*=(m/a+1);

    cout<<ans;


    return 0;
}

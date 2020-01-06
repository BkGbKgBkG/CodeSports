#include <bits/stdc++.h>

using namespace std;
int n, k, ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    k=240-k;
    ans = ((-5) + sqrt(25+40*k))/10;
    if(ans >=n) cout<<n;
    else
    cout<<ans;
    return 0;
}

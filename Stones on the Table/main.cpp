#include <bits/stdc++.h>

using namespace std;
int n;
char stones[51];
int main()
{
    freopen("a.inp", "r", stdin);
    string s;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>stones[i];
    int ans=0;
    for(int i=1; i<n; i++)
        if(stones[i] ==stones[i+1]) ans++;
    cout<<ans;
    return 0;
}

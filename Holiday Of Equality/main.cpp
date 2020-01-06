#include <bits/stdc++.h>

using namespace std;
int n, a[1000006], maxx=INT_MIN;
long long ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        maxx=max(maxx, a[i]);
    }
    for(int i=1; i<=n; i++){
        ans+= maxx-a[i];
    }
    cout<<ans;
    return 0;
}

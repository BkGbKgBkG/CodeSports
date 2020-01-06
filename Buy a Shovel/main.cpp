#include <bits/stdc++.h>

using namespace std;
long long k, r, ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k>>r;
    long long t=k;
    while(k%10!=0 && k%10!=r){
        k+=t;
        ans++;
    }
    cout<<ans+1;
    return 0;
}

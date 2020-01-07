#include <bits/stdc++.h>
#define ll long long
#define map map<ll, ll>
#define ii pair<ll, ll>

using namespace std;
int a, b, ans;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    if(a==b && a==1){
        cout<<0;
        return 0;
    }
    while(a!=0 && b!=0 ) {
        if(a>b) {
            swap(a, b);
        }
        if(b==2){
            ans++;
            break;
        }
        if(b%2==0) {
            ans += b/2 -1;

            a+= b/2-1;
            b= b%2 +2;
        } else {
            ans +=b/2;
            a+=b/2;
            b=b%2;
        }
    }
    cout<<ans;
    return 0;
}

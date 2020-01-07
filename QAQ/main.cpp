#include <bits/stdc++.h>
#define ll long long
#define map map<ll, ll>
#define ii pair<ll, ll>

using namespace std;
char a[105];
int n, ans;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char t;
    while(cin>>t) {
        if(t=='Q' || t=='A') {
            n++;
            a[n]=t;
        }
    }
    for(int i=1; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            for(int k=j+1; k<=n; k++){
                if(a[i]=='Q' && a[j]=='A' && a[k]=='Q') ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}

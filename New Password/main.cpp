#include <bits/stdc++.h>

using namespace std;
int n, k, app[200];
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    string ans="";
    int d=0, i;
    while(ans.size()<n){

        for(i=97; i<=122; i++){
                ans+=char(i);
                app[i]=1;
                d++;
                if(d==k) break;
        }
        string t=ans;
        if(ans.size() < n){
            while(ans.size()<n){
                ans+=t;
            }
        }
    }
    for(i=0; i<n; i++) cout<<ans[i];
    return 0;
}

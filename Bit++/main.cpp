#include <bits/stdc++.h>

using namespace std;

int n, x;
char a, b, c;

int main()
{
    freopen("a.inp", "r", stdin);
    //freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>c;
        if(a=='+' || b=='+') x++;
        else if(a=='-' || b=='-') x--;
    }
    cout<<x;
    return 0;
}

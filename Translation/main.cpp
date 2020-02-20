#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    string t, s;
    cin>>t>>s;
    reverse(s.begin(), s.end());
    cout<<(t==s ? "YES":"NO");
    return 0;
}

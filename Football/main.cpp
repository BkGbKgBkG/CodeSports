#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    freopen("a.inp", "r", stdin);
    cin>>s;
    string a="1111111", b="0000000";
    if(s.find(a)!=-1 || s.find(b)!=-1) cout<<"YES";
    else cout<<"NO";
    return 0;
}

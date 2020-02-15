#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    string s;
    cin>>s;
    if( s.find("H")!=-1 || s.find("Q")!=-1 || s.find("9")!=-1 ) cout<<"YES";
    else cout<<"NO";
    return 0;
}

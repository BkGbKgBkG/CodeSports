#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    cin>>s;
    s[0] = (s[0] >='a' && s[0]<='z' ? char(int(s[0])-32): s[0] );
    cout<<s;
    return 0;
}

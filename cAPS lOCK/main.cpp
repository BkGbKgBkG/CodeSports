#include <bits/stdc++.h>

using namespace std;

void change(string s) {
    for(int i=0; i<s.size(); i++) {
        if( s[i] >='A' && s[i]<='Z')
            s[i] = char(int(s[i]) + 32);
        else s[i] = char(int(s[i])-32);
    }
    cout<<s;
}
bool Check(string s) {
    bool ans = false;
    if(s[0]>='a' && s[0]<='z')
        for(int i=1; i<s.size(); i++)
            if(s[i] >='a' && s[i]<='z')
                return false;
    for(int i=1; i<s.size(); i++)
        if(s[i] >='a' && s[i]<='z')
            return false;
    return true;
}
int main() {
    freopen("a.inp", "r", stdin);
    string s;
    cin>>s;
    if(Check(s))
        change(s);
    else
        cout<<s;
    return 0;
}

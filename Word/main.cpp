#include <bits/stdc++.h>

using namespace std;
string inhoa(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z') s[i] = char(s[i]-32);
    }
    return s;
}
string inthuong(string s){
     for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z') s[i] = char(s[i]+32);
    }
    return s;
}
bool CC(string s){
    int a=0, b=0;
    for(int i=0; i<s.size(); i++){
         if(s[i]>='A' && s[i]<='Z') a++;
         else b++;
    }
    if(a>b) return false;
    else return true;
}
int main()
{
    freopen("a.inp", "r", stdin);
    string s;
    cin>>s;
    if(CC(s)) cout<<inthuong(s);
    else cout<<inhoa(s);
    return 0;
}

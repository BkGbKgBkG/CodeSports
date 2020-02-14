#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("a.inp", "r", stdin);
    string s;
    cin>>s;
    int x=0, y=0, i=0;
    bool z=false;
    char c[5]={'h', 'e', 'l', 'l', 'o'};
    while(s.find(c[i])!=-1){
        s.erase(0, s.find(c[i])+1);
        if(i==4) {cout<<"YES";return 0;}
        i++;

    }
    cout<<"NO";
    return 0;
}

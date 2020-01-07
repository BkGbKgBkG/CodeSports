#include <bits/stdc++.h>

using namespace std;

string s1, s2;
float ans;
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s1>>s2;
    int n= s1.size(), h=0, h2=0, ques=0;

    for(int i=0; i<n;i++){
        if(s1[i]=='+') h++;
        else h--;
    }
    for(int i=0; i<n; i++){
        if(s2[i]=='+') h2++;
        else if(s2[i]=='-') h2--;
        else ques++;
    }
    if(ques==0){
        if(h==h2) cout<<"1.000000000000";
        else cout<<"1.000000000000";
    }
    else {
    }
    return 0;
}

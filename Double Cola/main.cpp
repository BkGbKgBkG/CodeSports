#include <bits/stdc++.h>

using namespace std;
long long n;
string ans[7] ={"", "Sheldon", "Leonard","Penny", "Rajesh", "Howard"};

int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n<=5){
        cout<<ans[n];
        return 0;
    }
    long long quantity=5, pos=0, present=2;
    while(quantity<n){
        quantity+=present;
        if(pos==6){
            pos=1;
            present*=2;
        }
        else pos++;
    }
    cout<<ans[pos];
    return 0;
}

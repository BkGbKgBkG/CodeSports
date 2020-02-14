#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    char t;
    int ans=0;
    bool name[266];
    memset(name, false, sizeof name);
    while(cin>>t){
        ans += (name[int(t)] ? 0:1);
        name[int(t)] =true;
    }
    cout<<(ans % 2 ==0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}

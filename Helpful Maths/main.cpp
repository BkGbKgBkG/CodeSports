#include <bits/stdc++.h>

using namespace std;
int x;
char a;
vector<int> ans;
int main()
{
    freopen("a.inp", "r", stdin);
    while(cin>>x){
        ans.push_back(x);
        cin>>a;
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size()-1; i++){
        cout<<ans[i]<<"+";
    }
    cout<<ans[ans.size()-1];
    return 0;
}

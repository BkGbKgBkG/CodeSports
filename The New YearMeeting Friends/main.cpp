#include <bits/stdc++.h>

using namespace std;
int x[4];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x[1]>>x[2]>>x[3];
    sort(x+1, x+4, greater<int>());
    cout<<x[1]-x[3];
    return 0;
}

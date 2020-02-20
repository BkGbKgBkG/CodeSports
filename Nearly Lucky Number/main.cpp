#include <bits/stdc++.h>

using namespace std;
bool Check(int x) {
    if (x==0)
        return false;
    while(x!=0) {
        if(x%10 !=4 && x%10 !=7)
            return false;
        x/=10;
    }
    return true;
}
int main() {
    freopen("a.inp", "r", stdin);
    char t;
    int a[20], n=0;
    while(cin>>t) {
        n++;
        a[n]=t-48;
    }
    int ans =count(a+1, a+1+n, 7) + count(a+1, a+1+n, 4) ;
    if(Check(ans))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

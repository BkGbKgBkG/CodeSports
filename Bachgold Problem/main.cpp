#include <bits/stdc++.h>
#define re return
#define ll long long

using namespace std;

int n;
vector<int> ans;

bool Prime(int n){
    if(n<2) re false;
    if(n==2 || n==3) re false;
    if(n%2==0 || n%3==0) re false;
    ll k=5;
    while(k<=sqrt(n)){
        if(n%k==0 ||n%(k+2)==0) re false;
        k+=6;
    }
    re true;
}
int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=1; i<= n/2; i++)
        cout<<2<<" ";
        re 0;
    }
    else {
        cout<<n/2<<endl;
        for(int i=1; i<n/2; i++)
        cout<<2<<" ";
        cout<<3;
        re 0;
    }
    return 0;
}

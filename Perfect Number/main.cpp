#include <bits/stdc++.h>

using namespace std;

int tcs(long long n){
    int ans=0;
    while(n!=0){
        ans+= n%10;
        n/=10;
    }
    return ans;
}
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int d=0;
    long long i=1;
    while(d<n){
        i++;
        if(tcs(i)==10){
            d++;
        }

    }
    cout<<i;
    return 0;
}

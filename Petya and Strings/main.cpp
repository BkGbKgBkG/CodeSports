#include <bits/stdc++.h>

using namespace std;
string a, b;
void chuanhoa(){
    for(int  i=0; i<a.size(); i++){
        if(a[i] >= 'A' && a[i]<='Z') a[i]= char(int(a[i]) +32);
        if(b[i] >= 'A' && b[i]<='Z') b[i]= char(int(b[i]) +32);
    }
}
int KiemTra(string a, string b){
    for(int i=0; i<a.size(); i++){
        if(a[i] < b[i]) return -1;
        else if(a[i] >b[i]) return 1;
    }
    return 0 ;
}
int main()
{
    freopen("a.inp", "r", stdin);
    cin>>a>>b;
    chuanhoa();
    cout<<KiemTra(a, b);
    return 0;
}

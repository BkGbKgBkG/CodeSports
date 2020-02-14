#include <bits/stdc++.h>

using namespace std;
int c[2]={4, 7}, a[6];
vector<int> lucky;
bool app[8];

void quaylui(int i, int lim){
    for(int j=0; j<2; j++){
        a[i]=c[j];
        if(i==lim){
            int s=0;
            app[4]=app[7]=false;
            for(int k =1; k<=lim; k++){
                app[a[k]]=true;
                s=s*10+a[k];
            }
            if(app[4] && app[7]) lucky.push_back(s);
        }
        else quaylui(i+1, lim);
    }
}

int main()
{
    freopen("a.inp", "r", stdin);
    int n;
    cin>>n;
    lucky.push_back(4);
    lucky.push_back(7);
    for(int i=1; i<=4; i++)
        quaylui(1, i);

    for(int i=0; i<lucky.size(); i++){
        if(n%lucky[i] ==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}

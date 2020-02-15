#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    int n, a;
    char pupil[50];
    cin>>n>>a;
    for(int i=0; i<n; i++){
        cin>>pupil[i];
    }
    while(a!=0){
        for(int i=0; i<n-1; i++){
            if(pupil[i] < pupil[i+1]) {swap(pupil[i], pupil[i+1]); i++;};
        }
        a--;
    }
    for(int i=0; i<n; i++) cout<<pupil[i];
    return 0;
}

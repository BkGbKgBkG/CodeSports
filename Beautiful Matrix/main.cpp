#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;
int matrix[6][6];
int main()
{
    freopen("a.inp", "r", stdin);
    ii point;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1) point = ii(i, j);
        }
    }
    // goal is (3, 3)
    cout<<abs(point.first-3)+ abs(point.second-3);
    return 0;
}

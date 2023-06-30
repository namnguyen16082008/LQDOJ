#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll s,a[5][5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=3;i++)
        for (ll j=1;j<=3;j++)
            cin>>a[i][j];
    s=a[1][1]+a[1][2]+a[1][3];
    for (ll i=1;i<=3;i++)
        if (a[i][1]+a[i][2]+a[i][3]!=s || a[1][i]+a[2][i]+a[3][i]!=s){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}


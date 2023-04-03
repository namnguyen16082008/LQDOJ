#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        for (ll j=i;j<i+i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n>1 && n<4) cout<<"NO SOLUTION";
    else{
        for (ll i=2;i<=n;i+=2) cout<<i<<" ";
        for (ll i=1;i<=n;i+=2) cout<<i<<" ";
    }
}

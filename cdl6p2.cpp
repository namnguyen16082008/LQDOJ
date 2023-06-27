#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (i!=x+1) cout<<a<<" ";
    }
}

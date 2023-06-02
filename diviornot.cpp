#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=3;i<=n;i+=3)
        if (i%3==0 && i%5!=0) cout<<i<<" ";
}

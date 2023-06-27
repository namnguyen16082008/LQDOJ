#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a;
ll X(ll x){
    return (x==0) ? x : abs(x)/x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>a) cout<<X(a)<<" ";
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
ll Pr(ll n){
    if (n<=3) return n>1;
    if (n%2==0 || n%3==0) return 0;
    ll i=5;
    while (i*i<=n){
        if (n%i==0 || n%(i+2)==0) return 0;
        i+=6;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b;
    (a-b==1 && Pr(a+b)) ? cout<<"YES" : cout<<"NO";
}

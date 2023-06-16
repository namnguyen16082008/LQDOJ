#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=2004010501;
ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<(((n*(n+1)/2)%MOD)*((n*(n+1)/2)%MOD))%MOD;
}

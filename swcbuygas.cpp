#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>a>>b;
    if (a*2<=b) cout<<n*a;
    else cout<<n/2*b+a*(n%2);
}

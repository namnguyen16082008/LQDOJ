#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Solve(ll n){
    return (n-1)*(n+4)*(n*n-3*n+4)/2;
    //Or return (n*n*n*n-9*n*n+24*n-16)/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cout<<Solve(i)<<endl;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll gt(ll n){
    if (n==0) return 1;
    return gt(n-1)*n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<gt(n);
}

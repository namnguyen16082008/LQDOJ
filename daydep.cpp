#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,x0=0,x1=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (a==0) x0++;
        else if (a==1) x1++;
    }
    (x0<=1 && x1>=1 && x0+x1==n) ? cout<<"YES" : cout<<"NO";
}

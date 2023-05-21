#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans1=1,ans2=1,a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    for (ll i=1;i<=a+b;i++) ans1*=2;
    for (ll i=1;i<=c;i++) ans2*=4;
    cout<<ans1-ans2;
}

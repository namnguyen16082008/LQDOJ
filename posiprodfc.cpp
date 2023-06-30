#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,x=0,y=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("posiprod.inp","r",stdin);
    freopen ("posiprod.out","w",stdout);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (a<0) x++;
        else if (a>0) y++;
    }
    (x+y==n) ? cout<<min(x,y) : cout<<-1;
}

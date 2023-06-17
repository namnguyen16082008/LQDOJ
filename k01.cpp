#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,xa,ya,xm,ym;
void Solve(){
    cin>>xa>>ya>>xm>>ym;
    cout<<2*xm-xa<<" "<<2*ym-ya<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

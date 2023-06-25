#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string a,b;
ll l(string s){
    return s.size();
}
void Solve(){
    cin>>a>>b;
    for (ll i=1;i<=min(a.size(),b.size());i++)
        if (a[a.size()-i]!=b[b.size()-i]){
            cout<<a.size()+b.size()-(i-1)*2<<endl;
            return;
        }
    cout<<abs(l(a)-l(b))<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

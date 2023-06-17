#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,b,c,o=0;
void Solve(){
    cin>>a>>b>>c;
    cout<<max(max(b,c)+1-a,o)<<" "<<max(max(c,a)+1-b,o)<<" "<<max(max(a,b)+1-c,o)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

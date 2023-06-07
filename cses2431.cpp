#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll q,k;
void Solve(){
    cin>>k;
    ll d=0,e=1;
    for (ll i=1;i<=100;i++){
        if (i==1) d=9;
        else d*=10;
        if (i>1) e*=10;
        if (k>d*i) k-=d*i;
        else{
            e+=k/i-1;
            k%=i;
            if (k==0) cout<<e%10<<endl;
            else{
                e++;
                ostringstream x;
                x<<e;
                string s=x.str();
                cout<<s[k-1]<<endl;
            }
            return;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while (q--) Solve();
}

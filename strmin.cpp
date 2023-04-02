#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll k,o,d;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>s;
    d=0,o=s.size()-k-1;
    for (ll i=1;i<=k;i++){
        char z='9';o++;
        for (ll j=d;j<=o;j++)
            z=min(z,s[j]);
        cout<<z;
        for (ll j=d;j<=o;j++)
            if (s[j]==z){
                d=j+1;
                break;
            }
    }
}

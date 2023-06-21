#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n[n.size()-1]=='0' && n.size()>1) n.erase(n.size()-1,1);
    for (ll i=n.size()-1;i>=0;i--) cout<<n[i];
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
string s;
vector <string> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=1;i<=a+b;i++){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for (auto x : v) cout<<x<<" ";
}

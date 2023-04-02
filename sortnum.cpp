#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d=0;
string s;
const ll S=300;
vector <char> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]>='0' && s[i]<='9')
            v.push_back(s[i]);
    sort(v.begin(),v.end());
    for (ll i=0;i<s.size();i++)
        if (s[i]>='0' && s[i]<='9'){
            cout<<v[d];
            d++;
        }
        else cout<<s[i];
}

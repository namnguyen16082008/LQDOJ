#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d=0;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    for (ll i=0;i<s.size();i++)
        if (s[i]!=' ') d++;
        else if (d!=0){
            cout<<d<<" ";
            d=0;
        }
    if (d!=0) cout<<d;
}

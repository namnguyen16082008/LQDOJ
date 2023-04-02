#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
string Palin(string s){
    for (ll i=0;i<=s.size()/2;i++)
        if (s[i]!=s[s.size()-i-1]) return "NO";
    return "YES";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    cout<<Palin(s);
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s1,s2;
ll Solve(string s){
    ll n=0;
    for (ll i=0;i<s.size();i++)
        n+=s[i]==' ';
    return n+1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s1);
    getline(cin,s2);
    cout<<Solve(s1)+Solve(s2);
}

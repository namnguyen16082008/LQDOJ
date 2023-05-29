#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=s.size()-1;i>=0;i--)
        if (s[i]=='0'){
            cout<<i+1;
            return 0;
        }
}

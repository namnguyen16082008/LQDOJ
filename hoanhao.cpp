#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size()-1;i++)
        if (s[i]==s[i+1]){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}

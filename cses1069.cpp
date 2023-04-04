#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n=1,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=1;i<s.size();i++)
        if (s[i]==s[i-1]) n++;
        else{
            ans=max(ans,n);
            n=1;
        }
    cout<<max(ans,n);
}

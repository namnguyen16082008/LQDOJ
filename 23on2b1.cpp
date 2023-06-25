#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if ((i%2==0 && (s[i]<'a' || s[i]>'z')) || (i%2==1 && (s[i]<'A' || s[i]>'Z'))){
            cout<<"No";
            return 0;
        }
    cout<<"Yes";
}

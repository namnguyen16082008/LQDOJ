#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char n;
ll k,s;
vector <char> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    k=0,s=0;
    while (cin>>n){
        if (n=='0') k=1;
        s+=int(n)-48;
        v.push_back(n);
    }
    if (k==0 || s%3!=0){
        cout<<-1;
        return 0;
    }
    sort(v.begin(),v.end(),greater<char>());
    for (auto x : v) cout<<x;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>s) n=(n+1)%2;
    if (s=="False" && n==1) cout<<"True";
    else if (s=="True" && n==1) cout<<"False";
    else cout<<s;
}

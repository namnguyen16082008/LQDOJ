#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    (a!=b && b!=c && c!=a && a+b>c && b+c>a && c+a>b) ? cout<<"YES" : cout<<"NO";
}

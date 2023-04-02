#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string nt(ll n){
    if (n<2) return "NO";
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0) return "NO";
    return "YES";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	cout<<nt(n);
}

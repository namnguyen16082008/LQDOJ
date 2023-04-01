#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,d=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=sqrt(n);i++)
    if (n%i==0){
        d+=i;
        d+=n/i;
    }
    if ((ll)sqrt(n)*(ll)sqrt(n)==n) d-=sqrt(n);
    (d==2*n) ? cout<<"YES" : cout<<"NO";
}

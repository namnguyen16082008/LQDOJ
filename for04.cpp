#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,s=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0) s+=2;
    if ((ll)sqrt(n)*(ll)sqrt(n)==n) s-=1;
    cout<<s;
}

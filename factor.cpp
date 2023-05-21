#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,d=2,ans=1;
vector <ll> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            while (n%i==0){
                n/=i;
                v.push_back(i);
            }
        }
    if (n>1) v.push_back(n);
    for (ll i=0;i<v.size();i++)
        (i==0) ? cout<<v[i] : cout<<'*'<<v[i];
    for (ll i=1;i<v.size();i++)
        if (v[i]==v[i-1]) d++;
        else{
            ans*=d;
            d=2;
        }
    cout<<endl<<ans*d;
}

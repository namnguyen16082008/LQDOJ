#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,d,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            d=0;
            while (n%i==0){
                n/=i;
                d++;
            }
            ans*=(d+1);
        }
    cout<<ans*((n>1)+1);
}

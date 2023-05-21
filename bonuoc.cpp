#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0,ans1=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0){
            ans+=1;
            ll d=0;
            while (n%i==0){
                n/=i;
                d++;
            }
            ans1+=(d>=3);
        }
    ans+=(n>1);
    cout<<ans*(ans-1)/2+ans1;
}

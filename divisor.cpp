#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans1=0,ans2=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0){
            (i*i==n) ? ans1++ : ans1+=2;
            (i*i==n) ? ans2+=i : ans2+=(i+n/i);
        }
    cout<<ans1<<" "<<ans2;
}

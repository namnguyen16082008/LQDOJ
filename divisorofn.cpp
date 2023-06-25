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
            ans1+=1+(i*i!=n);
            ans2+=i+(n/i)*(i*i!=n);
        }
    cout<<ans1<<" "<<ans2;
}

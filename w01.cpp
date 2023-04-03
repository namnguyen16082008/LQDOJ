#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>n){
        ans+=n;
        if (n==0) break;
    }
    cout<<ans;
}

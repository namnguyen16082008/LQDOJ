#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
vector <pair<ll,ll>> v;
void Pull(ll n, ll a, ll b){
    if (n==1){
        v.emplace_back(a,b);
        return;
    }
    Pull(n-1,a,6-a-b);
    Pull(1,a,b);
    Pull(n-1,6-a-b,b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n==1){
        cout<<1<<endl<<1<<" "<<3;
        return 0;
    }
    Pull(n-1,1,2);
    Pull(1,1,3);
    Pull(n-1,2,3);
    cout<<v.size()<<endl;
    for (auto x : v) cout<<x.first<<" "<<x.second<<endl;
}

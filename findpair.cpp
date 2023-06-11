#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,a;
unordered_map <ll,ll> mp;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>x;
	for (ll i=1;i<=n;i++){
        cin>>a;
        if (mp[x-a]!=0){
            cout<<mp[x-a]<<" "<<i<<endl;
            return 0;
        }
        mp[a]=i;
	}
	cout<<"No solution";
}

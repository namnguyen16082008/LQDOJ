#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,s=0,d=0,x;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (ll i=1;i<=n;i++){
        cin>>x;
        if (x<0){
            s+=x;
            d++;
        }
	}
	(d==0) ? cout<<-1 : cout<<fixed<<setprecision(2)<<(double)s/(double)d;
}

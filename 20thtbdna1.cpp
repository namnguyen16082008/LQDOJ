#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	while (n!=1){
        if (n%2){
            cout<<-1;
            return 0;
        }
        (n%6==0) ? n/=6 : n*=3;
        ans++;
	}
	cout<<ans;
}

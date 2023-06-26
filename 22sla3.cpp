#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    (m%2==0) ? cout<<(n+1)*m/2 : cout<<(n+1)*(m-1)/2+m/2+1;
}

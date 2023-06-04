#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>n;
    cout<<(n+b*(a-1)-1)/(b*(a-1));
}

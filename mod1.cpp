#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    cout<<(a+b)%c<<" "<<(a-b+inf/c*c)%c<<" "<<((a%c)*(b%c))%c;
}

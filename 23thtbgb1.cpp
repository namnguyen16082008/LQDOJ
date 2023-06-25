#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if (a>=0) cout<<a+1;
    else if (b<=0) cout<<b-1;
    else cout<<0;
}

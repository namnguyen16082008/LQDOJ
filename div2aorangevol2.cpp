#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    (abs(a-b)%2==0) ? cout<<"YES" : cout<<"NO";
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,h;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>h;
    for (ll i=1;i<=h;i++){
        for (ll j=1;j<i;j++) cout<<' ';
        for (ll j=1;j<a;j++) cout<<"* ";
        cout<<"*"<<endl;
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    for (ll i=1;i<=10;i++){
        for (ll j=1;j<=a;j++)
            cout<<'#';
        cout<<endl;
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y;
    if (y*10>x) cout<<"Arabica duoc mua."<<endl<<"He so gia ban: 2";
    else cout<<"Arabica mat mua."<<endl<<"He so gia ban: 3";
}

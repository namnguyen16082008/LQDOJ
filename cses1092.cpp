#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=0,y=0;
vector <ll> a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=n;i>=1;i--)
        if (x<=y){
            x+=i;
            a.push_back(i);
        }
        else if (x>y){
            y+=i;
            b.push_back(i);
        }
    if (x==y){
        cout<<"YES"<<endl<<a.size()<<endl;
        for (auto o : a) cout<<o<<" ";
        cout<<endl<<b.size()<<endl;
        for (auto o : b) cout<<o<<" ";
    }
    else cout<<"NO";
}

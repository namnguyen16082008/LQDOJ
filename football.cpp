#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n[0]=='0' || n=="0"){
        cout<<-1;
        return 0;
    }
    for (ll i=0;i<n.size();i++)
        if (n[i]<'0' || n[i]>'9'){
            cout<<-1;
            return 0;
        }
    ll nho=0;
    for (ll i=n.size()-1;i>=0;i--){
        n[i]=n[i]-nho-(i==n.size()-1);
        nho=0;
        if (n[i]<'0'){
            n[i]+=10;
            nho++;
        }
        if (nho==0) break;
    }
    while (n[0]=='0' && n.size()>1) n.erase(0,1);
    cout<<n;
}

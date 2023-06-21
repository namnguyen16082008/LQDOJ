#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a[10],x[10]={};
void Check(){
    for (ll i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void Try(ll i){
    for (ll j=1;j<=n;j++)
        if (x[j]==0){
            x[j]=1;
            a[i]=j;
            if (i<n) Try(i+1);
            else Check();
            x[j]=0;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    Try(1);
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,x,y,k,a[2]={1,-1};
void Solve(){
    cin>>x>>y;
    if (x<=y) k=0;
    else{swap(x,y);k=1;}
    cout<<y*y-(2*y-1)*(y%2==k%2)+x*a[(y+k)%2]+(y%2!=k%2)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll q,n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while (q--){
        cin>>n;
        x=sqrt(n);
        (x*x==n) ? cout<<x<<endl : cout<<x+1<<endl;
    }
}

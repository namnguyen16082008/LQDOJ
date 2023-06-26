#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,u,v,x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>u>>v>>x>>y;
    cout<<"Tong so tien ve: "<<(a+u)*(x-y)+(b+v)*y<<" nghin dong.";
}

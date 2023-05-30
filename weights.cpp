#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b>>c;
    cout<<(a+b+c)/2-b<<" "<<(a+b+c)/2-c<<" "<<(a+b+c)/2-a;
}

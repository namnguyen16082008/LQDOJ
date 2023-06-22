#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    cout<<a+b+c-max(a,max(b,c))-min(a,min(b,c));
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,x[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (c%400==0 || (c%4==0 && c%100!=0)) x[2]++;
    if (a==x[b]){
        if (b==12) cout<<1<<" "<<1<<" "<<c+1;
        else cout<<1<<" "<<b+1<<" "<<c;
    }
    else cout<<a+1<<" "<<b<<" "<<c;
}

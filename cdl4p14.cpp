#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b,c,p;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    cout<<"Dien tich tam giac: "<<fixed<<setprecision(2)<<sqrt(p*(p-a)*(p-b)*(p-c));
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    cout<<"Boi chung nho nhat cua "<<a<<" va "<<b<<" la "<<abs(a*b/__gcd(a,b));
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    n-=n%3;
    cout<<(3+n)*((n-3)/3+1)/2;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll s1,s2,t1,t2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>t1>>s2>>t2;
    (s1*t2>s2*t1) ? cout<<"YES" : cout<<"NO";
}

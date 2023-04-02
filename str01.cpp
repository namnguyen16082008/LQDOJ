#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,a);
    getline(cin,b);
    (a.size()>b.size()) ? cout<<a.size()-b.size() : cout<<b.size()-a.size();
}

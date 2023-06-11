#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
vector <char> v;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>s;
	for (ll i=0;i<s.size();i+=2) v.push_back(s[i]);
	sort(v.begin(),v.end());
	for (ll i=0;i<v.size()-1;i++) cout<<v[i]<<'+';
	cout<<v[v.size()-1];
}

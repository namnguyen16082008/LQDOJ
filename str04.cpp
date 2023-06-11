#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	getline (cin,s);
	for (ll i=s.size()-1;i>=0;i--) if (s[i]==' ' && s[i-1]==' ')s.erase(i,1);
    cout<<s<<endl;
}

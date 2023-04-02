#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char s='0',k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin>>k) s=max(s,k);
	cout<<s;
}

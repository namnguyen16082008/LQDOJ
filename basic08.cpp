#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>k;
	k+=32;
	(k!='A') ? cout<<char(k-1) : cout<<'Z';
}

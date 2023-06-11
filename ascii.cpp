#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n=0;
char k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin>>k){
        n=n*10+int(k)-48;
        if (n>=97 && n<=122){
            cout<<char(n);
            n=0;
        }
	}
}

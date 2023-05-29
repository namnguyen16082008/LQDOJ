#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (a*2+b*2+c>=40) cout<<"gioi";
    else if (a*4+b*4+c*2>=65) cout<<"kha banh";
    else if (a*2+b*2+c>=25) cout<<"trung binh";
    else cout<<"yeu";
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=25;
ll t,n;
string a[N];
void Build(){
    a[0]="1";
    a[1]="1";
    a[2]="2";
    a[3]="6";
    a[4]="24";
    a[5]="120";
    a[6]="720";
    a[7]="5040";
    a[8]="40320";
    a[9]="362880";
    a[10]="3628800";
    a[11]="39916800";
    a[12]="479001600";
    a[13]="6227020800";
    a[14]="87178291200";
    a[15]="1307674368000";
    a[16]="20922789888000";
    a[17]="355687428096000";
    a[18]="6402373705728000";
    a[19]="121645100408832000";
    a[20]="2432902008176640000";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--){
        cin>>n;
        cout<<a[n]<<endl;
    }
}

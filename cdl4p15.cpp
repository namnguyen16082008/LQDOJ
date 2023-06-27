#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double a,b,c,u,v,w,p,q,r;
double Cal(double x, double y, double z){
    double P=(x+y+z)/2;
    return sqrt(P*(P-x)*(P-y)*(P-z));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>u>>v>>w>>p>>q>>r;
    cout<<fixed<<setprecision(2)<<"Dien tich tam giac lon nhat: "<<max(Cal(a,b,c),max(Cal(u,v,w),Cal(p,q,r)));
}

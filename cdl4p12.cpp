#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double w,h;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>h;
    h/=100;
    cout<<"Chi so BMI: "<<fixed<<setprecision(2)<<w/(h*h);
}

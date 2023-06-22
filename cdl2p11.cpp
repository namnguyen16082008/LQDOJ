#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double w,h;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>h;
    w=w/h/h;
    if (w<18.5) cout<<"Thieu can";
    else if (w<=22.9) cout<<"Binh thuong";
    else cout<<"Thua can";
}

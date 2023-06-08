#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    (n%400==0 || (n%4==0 && n%100!=0)) ? cout<<"Nam nhuan" : cout<<"Khong la nam nhuan";
}

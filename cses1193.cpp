#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000;
ll n,m,Bi,Bj,Di,Dj,x[N+5][N+5],fi[4]={-1,1,0,0},fj[4]={0,0,-1,1};
string ans="";
deque <pair<ll,ll>> dq;
char a[N+5][N+5],F[4]={'D','U','R','L'};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++){
            cin>>a[i][j];
            (a[i][j]=='#') ? x[i][j]=-1 : x[i][j]=0;
        }
    for (ll i=1;i<=n;i++){x[i][0]=-1;x[i][m+1]=-1;}
    for (ll i=1;i<=m;i++){x[0][i]=-1;x[n+1][i]=-1;}
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            if (a[i][j]=='A'){
                dq.emplace_back(i,j);
                x[i][j]=1;
            }
            else if (a[i][j]=='B'){Bi=i,Bj=j;}
    while (!dq.empty()){
        Di=dq.front().first;Dj=dq.front().second;
        dq.pop_front();
        for (ll o=0;o<4;o++){
            if (x[Di+fi[o]][Dj+fj[o]]==0){
                x[Di+fi[o]][Dj+fj[o]]=x[Di][Dj]+1;
                dq.emplace_back(Di+fi[o],Dj+fj[o]);
            }
        }
    }
    if (x[Bi][Bj]==0){
        cout<<"NO";
        return 0;
    }
    while (x[Bi][Bj]!=1){
        for (ll i=0;i<4;i++)
            if (x[Bi+fi[i]][Bj+fj[i]]+1==x[Bi][Bj]){
                Bi+=fi[i];
                Bj+=fj[i];
                ans+=F[i];
                break;
            }
    }
    cout<<"YES"<<endl<<ans.size()<<endl;
    for (ll i=ans.size()-1;i>=0;i--) cout<<ans[i];
}

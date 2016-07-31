#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 500005
#define ll long long
#define p(t) cout<<t;
#define f(i,n) for(i=0;i<n;i++)
#define g(i,n) for(i=1;i<=n;i++)
#define s(x) scanf("%I64d",&x);
#define pb push_back
#define mp make_pair


ll a[N],b[N],ans[N],m,n,r;
vector<pair<ll,ll> >v[N];

void dfs(ll x,ll d,ll ret){
  if(d>a[x])return;//cout<<ret<<" "<<x<<" \n";
  r++;
  d=max(d,0ll);
  for(ll i=0;i<v[x].size();i++){
    int t=v[x][i].first,k=v[x][i].second;
    if(t!=ret){
      dfs(t,k+d,x);
    }
 }
}



int main()
{
ios_base::sync_with_stdio(0);
ll k=0,t=0,x,sum=0,q=0,z=0,y=2,l,p,i,j;
cin>>n;
g(i,n)cin>>a[i];
m=n-1; i=2;
while(m--){
  cin>>x>>y;
  v[i].pb(mp(x,y));
  v[x].pb(mp(i,y));
  i++;
}
dfs(1,0,1);
cout<<n-r;
return 0;
}

//My first dfs submission Status:AC
#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
typedef pair<int,int> pi;
typedef vector<int> vi;

vi adjlist[200010];
bool vis[200010];
ll size=0;

int dfs(int n)
{
  vis[n]=true;
  size++;
  for(int i=0;i<adjlist[n].size();i++)
    if(!vis[adjlist[n][i]]) dfs(adjlist[n][i]);
}
main()
{
  ios_base::sync_with_stdio(0);
  int t,n,m;
  cin>>t;
  while(t--)
  {
    memset(vis,0,sizeof(vis));
    cin>>n>>m;
    for(int i=0;i<n;i++) adjlist[i].clear();
    for(int i=0;i<m;i++)
    {
      int x,y;
      cin>>x>>y;
      x--;y--;
      adjlist[x].pb(y);
      adjlist[y].pb(x);
    }
    ll num=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
      if(!vis[i])
      {
        size=0;
        ans++;
        dfs(i);
        num*=size;
        if(num>=mod) num%=mod;
      }
    }
    cout<<ans<<" "<<num<<"\n";
  }
}

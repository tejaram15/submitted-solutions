#include<bits/stdc++.h>
using namespace std;
int n,m,t,scr=0;
bool clr[1001][1001];
bool dfs(int x,int y)
{
  if(x<0||x>n-1) return 0;
  if(y<0||y>m-1) return 0;
  if(clr[x][y]==1) return 1;
  clr[x][y]=1;
  return (dfs(x,y+1)|dfs(x,y-1)|dfs(x+1,y)|dfs(x-1,y));
}
main()
{
  cin>>t;
  while(t--)
  {
    memset(clr,0,sizeof(clr));
    cin>>n>>m;
    long sum=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(dfs(i,j)) sum++;
    cout<<sum<<"\n";
  }
}

#include"bits/stdc++.h"
using namespace std;
int mat[4][4]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
bool visited[4][4];
//recursive implementation of flood fill problem.
int dfs(int x,int y)
{
  if(x<0||x>4) return 0;
  if(y<0||y>4) return 0;
  if(visited[x][y]) return 0;
  visited[x][y]=true;
  return 1+dfs(x,y-1)+dfs(x,y+1)+dfs(x-1,y)+dfs(x+1,y);
}

main()
{
  memset(visited,sizeof(visited),false);
  cout<<dfs(0,0);
}

#include"bits/stdc++.h"
using namespace std;
char a[20][20];
main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>a[i][j];
  n--;m--;
  string s;
  for(int i=1;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      //if(a[i][j]=='C') break;
      if(j!=m-1)
        if(a[i][j+1]!='*') s+="R";
      if(j!=1)
      if(a[i][j-1]!='*') s+="L";
      if(i!=n-1)
        if(a[j][i+1]!='*') s+="U";
      if(i!=1)
      if(a[j][i-1]!='*') s+="D";
    }
  }
  cout<<s;
}

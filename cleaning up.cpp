#include"bits/stdc++.h"
using namespace std;
main()
{
  int t,n,m,a,cnt=0;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    bool chef[n+1];
    memset(chef,1,sizeof(chef));
    for(int i=0;i<m;i++)
    {
      cin>>a;
      chef[a]=0;
    }
    cnt=0;
    for(int i=1;i<=n;i++)
    {
      if(chef[i])
      {
        if(cnt%2==0)
        {
          cout<<i<<" ";
          chef[i]=0;
        }
        cnt++;
      }
    }
    cout<<"\n";
    for(int i=1;i<=n;i++)
    {
      if(chef[i]) cout<<i<<(i==n?'\n':' ');
    }
  }
}

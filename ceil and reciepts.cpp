#include"bits/stdc++.h"
using namespace std;
main()
{
  int t,p,ta[12];
  for(int i=0;i<12;i++) ta[i]=(1<<i);
  cin>>t;
  while(t--)
  {
    cin>>p;
    int res=0;
    for(int i=11;i>=0;i--)
    {
      res+=(p/ta[i]);
      p%=ta[i];
    }
    cout<<res<<"\n";
  }
}

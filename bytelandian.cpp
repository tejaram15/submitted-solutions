#include"bits/stdc++.h"
using namespace std;
map<int,long int> mp;
long int maxim(int n)
{
    if(n<4) return n;
    long int c=mp[n];
    if(c==0)
    {
      long int res=maxim(n/2)+maxim(n/3)+maxim(n/4);
      c=max(c,res);
      mp[n]=c;
    }
    return c;
}
main()
{
  int n;
  while(cin>>n)
  {
    if(n<12) cout<<n;
    else if(n>=0&&n<=1000000000)
      cout<<maxim(n);
    cout<<"\n";
  }
}

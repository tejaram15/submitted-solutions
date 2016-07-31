#include"bits/stdc++.h"
using namespace std;
main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t,n,p,q;
  cin>>t;
  while(t--)
  {
    cin>>n>>p>>q;
    int a[n+1],cnt=0;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(q==0)
    {
      for(int i=0;i<n;i++)
      {
        if(p>=a[i])
        {
          p-=a[i];
          cnt++;
        }
      }
    }
    else if(p==0)
    {
      for(int i=0;i<n;i++)
      {
        if(!(a[i]&1))
        {
          if(q>=a[i]/2)
          {
            q-=a[i]/2;
            cnt++;
          }
        }
      }
    }
    cout<<cnt<<"\n";
  }//end while
}//end main

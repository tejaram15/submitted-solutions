#include"bits/stdc++.h"
using namespace std;
main()
{
  int t,n;
    cin>>n;
    int a[n+1],max_end_here=0,max_so_far=0,cnt=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];}
      for(int i=0;i<n-1;i++)
      {
      max_end_here+=a[i];
      if(a[i]>=a[i+1]) {max_end_here=0;cnt=0;}
      else {max_so_far = max_end_here;
            cnt++;}
    }
    cout<<cnt+1<<"\n";
}

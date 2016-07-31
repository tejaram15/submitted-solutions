#include"bits/stdc++.h"
using namespace std;
main()
{
  int t,n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int sz=n-2*k,sum=0;
    for(int i=k;i<n-k;i++) sum+=a[i];
    float tp=(float)sum/sz;
    printf("%.6f\n",tp);
  }
}

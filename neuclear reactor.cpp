#include"bits/stdc++.h"
using namespace std;
main()
{
  ios_base::sync_with_stdio(0);
  long long int a,n,k,i;
  cin>>a>>n>>k;
  long long int b[101]={0};
  for(i=0;i<k;i++)
  {
    b[i]=a%(n+1);
    a/=(n+1);
  }
  for(i=0;i<k;i++) cout<<b[i]<<" ";
}

#include"bits/stdc++.h"
using namespace std;
int s(int x)
{
  int sum=0;
  while(x)
  {
    sum+=x%10;
    x/=10;
  }
  return sum;
}
main()
{
  ios_base::sync_with_stdio(0);
  int n,cnt=0,temp;
  cin>>n;
  temp=n-100;
  temp=(temp<1?1:temp);
  for(int x=temp;x<n;x++)
    if((x+s(x)+s(s(x)))==n)
      cnt++;
  cout<<cnt;
}

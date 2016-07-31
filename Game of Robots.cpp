#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  int n;
  cin>>n;
  int a[n+1],ans=0;
  for(int i=1;i<=n;i++) a[i];
  for(int i=1;i<=n;i++){
    if(a[i]==1||a[i]==n)
    {
      ans=max(ans,i-1);
      ans=max(ans,n-i);
    }
  }
  cout<<ans;
  return 0;
}

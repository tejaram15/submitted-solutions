#include"bits/stdc++.h"
using namespace std;
main()
{
  ios_base::sync_with_stdio(0);
  int t,n,ans=INT_MAX;
  cin>>t;
  while(t--)
  {
    ans=INT_MAX;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
      ans=min(ans,abs(v[i]-v[i+1]));
    cout<<ans<<"\n";
  }
}

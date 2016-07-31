#include"bits/stdc++.h"
using namespace std;
main()
{
  ios_base::sync_with_stdio(0);
  int q,n,t;
  cin>>n>>q;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(v.begin(),v.end());
  while(q--)
  {
    cin>>t;
    if(t>=v[0]&&t<=v[n-1]) cout<<"Yes\n";
    else cout<<"No\n";
  }
}

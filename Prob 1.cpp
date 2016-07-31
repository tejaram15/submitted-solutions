#include"bits/stdc++.h"
using namespace std;
main()
{
  map<int,int> mp;
  map<int,int>::iterator it;
  int t,n,k;
  cin>>t;
  while(t--)
  {
    set<int> st;
    set<int>::iterator ist;
    mp.clear();
    cin>>n>>k;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]!=i+1)
        mp[a[i]]++;
      if(a[i]==i+1) st.insert(a[i]);
    }
    int cnt=0,cnt1=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
      ist=st.find(it->first);
      if(ist!=st.end()&&it->second>=k) cnt1++;
    }
     for(it=mp.begin();it!=mp.end();it++)
          if(it->second>=k) cnt++;
    cout<<cnt-cnt1<<"\n";
  }
}

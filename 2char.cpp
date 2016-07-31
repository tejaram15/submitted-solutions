//Wrong algo
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  int n,le=0;
  cin>>n;
  set<int> mp;
  set<int>::iterator it;
  for(int i=0;i<n;i++)
  {
    int cnt=0;
    string s;
    cin>>s;
    int l=s.length();
    for(int j=0;j<l;j++) mp.insert(s[j]);
    cnt=mp.size();
    if(cnt<=2) le=max(le,le+l);
    else if(cnt>2)
    {
      cnt-=2;
      for(int k=0;k<cnt;k++) mp.erase(--mp.end());
    }
  }
  cout<<le<<"\n";
  return 0;
}

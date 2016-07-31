#include"bits/stdc++.h"
using namespace std;
main()
{
  int t;
  cin>>t;
  while(t--)
  {
    bool ch_a[26],ch_b[26];
    string a,b;
    cin>>a>>b;
    int l_a=a.length(),l_b=b.length();
    for(int i=0;i<26;i++){ch_a[i]=false;ch_b[i]=false;}
    for(int i=0;i<l_a;i++) ch_a[a[i]-'a']=true;
    for(int i=0;i<l_b;i++) ch_b[b[i]-'a']=true;
    bool state=false;
    for(int i=0;i<26;i++) {if(ch_a[i]&&ch_b[i]) {state=true;break;}}
    if(state) cout<<"Yes\n";
    else cout<<"No\n";
  }
}

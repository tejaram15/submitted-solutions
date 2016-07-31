#include"bits/stdc++.h"
using namespace std;
bool prime[100005];
main()
{
  for(int i=0;i<100005;i++) prime[i]=false;
  prime[0]=true;
  for(int i=2;i<=100000;i++)
  {
    if(i==2) {prime[i]=true;continue;}
    int cnt=0;
    for(int j=1;j<=sqrt(i);j++)
    {
      if(i%j==0) cnt++;
    }
    if(cnt==2) prime[i]=true;
  }
  int ct=0;
  for(int i=1;i<=10000;i++) if(prime[i]) cout<<i<<" , ";
  //cout<<ct;
}

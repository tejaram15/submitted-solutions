#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
int n;
cin>>n;
int a[n+1],b[n+1],cnt=0;
for(int i=0;i<n;i++) cin>>a[i];
while(1)
{
  for(int i=0;i<n;i++)
  {
    int A=a[i-1],B=a[i],C=a[i+1];
    if(i==0||i==n-1) b[i]=a[i];
    else b[i]=A*B+A*C+B*C;
  }
  cnt++;
  if(equal(a,a+sizeof a,b)==0) break;
}
cout<<cnt-1<<'\n';
for(int i=0;i<n;i++) cout<<b[i]<<(i==n-1?'\n':' ');
return 0;
}

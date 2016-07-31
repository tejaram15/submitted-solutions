#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
char ch[8][8];
for(int i=0;i<8;i++)
  for(int j=0;j<8;j++)
    cin>>ch[i][j];
int w_ct=99,b_ct=99;
for(int i=0;i<8;i++)
{
  for(int j=0;j<8;j++)
  {
    int flag=0,cnt=0;
    if(ch[i][j]=='B')
    {
      if(i==7) b_ct=0;
      else{
        for(int k=i+1;k<8;k++)
        {
          if(ch[k][j]=='.') cnt++;
          else flag=1;
        }
        if(flag==0) b_ct=min(b_ct,cnt);
      }
    }
    if(ch[i][j]=='W')
    {
      if(i==0) w_ct=0;
      else{
        for(int k=i-1;k>=0;k--)
        {
          if(ch[k][j]=='.') cnt++;
          else flag=1;
        }
        if(flag==0) w_ct=min(w_ct,cnt);
      }
    }
  }
}
cout<<(w_ct<b_ct?'A':'B');
cout<<"\n";
return 0;
}

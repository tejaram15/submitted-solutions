#include"iostream"
#include"vector"
using namespace std;
main()
{
  int cnt=0;
  for(int i=1;i<=10000;i++)
  {
      int x=i;
      vector<int> vt;
      bool state=true;
      while(x)
      {
        vt.push_back(x%10);
        x/=10;
      }
      int m=vt.size();
      for(int j=0;j<m;j++)
      {
        if(i==0)
          state &= (vt[j]==vt[m-1]);
        else if(i>0)
          state &= (vt[j]==vt[m-j-1]);
      }
      if(state) {cout<<i<<",";cnt++;}
  }
  cout<<"\n"<<cnt;
}

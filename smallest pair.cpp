#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
main()
{
  vector<int> a;
  int cnt=0;
  for(int i=1;i<=100000;i++)
  {
    a.clear();
    bool state=true;
    int tmp=i;
    while(tmp)
    {
      a.push_back(tmp%10);
      tmp/=10;
    }
    int m=a.size();
    for(int j=0;j<m;j++)
      state &= (a[j]==a[m-j-1]);
    if(state) {cout<<i<<",";cnt++;}
  }
  cout<<"\n"<<cnt<<"\n";
}

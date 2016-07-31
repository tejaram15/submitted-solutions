//Nailed in First Go
#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  int n,m1=0,m2=0;
  cin>>n;
  if(n==1) m2=1;
  else if(n==2)
  {
    m1=0; m2=2;
  }
  else if(n%7==0)
  {
    m1=2*(n/7);m2=2*(n/7);
  }
  else if(n<6)
  {
    m1=0;m2=2;
  }
  else if(n==6)
  {
    m1=1;m2=2;
  }
  else
  {
    m2=2*(n/7);
    m1=2*(n/7);
    int tp=n%7;
    if(tp==1) m2++;
    else if(tp==2) m2+=2;
    else if(tp<6) m2+=2;
    else if(tp==6)
    {
      m1+=1;m2+=2;
    }
  }
  cout<<m1<<" "<<m2;
  return 0;
}

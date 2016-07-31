#include"bits/stdc++.h"
using namespace std;
int sq(int n)
{
  if(n==0) return 0;
  if(n<0) n=-n;
  int x=n>>1;//Making floor(n/2)
  //(2*x+1)^2==4*x^2+4*x+1
  //(2x)^2=4*x^2
  if(n&1)//checking if n is odd
    return ((sq(x)<<2)+(x<<2)+1);
  else return (sq(x)<<2);
}
main()
{
  int t,ls,b,rs;
  cin>>t;
  while(t--)
  {
    cin>>b>>ls;
    float f1=sqrt(sq(b)+sq(ls));
    float f2=sqrt(sq(ls)-sq(b));
    printf("%.5f %.5f\n", f2, f1);
  }
}

#include"iostream"
using namespace std;
typedef long long int ll;
ll n,ans=0;
void q()
{
    ll p=1;
    while(p<=n)
    {
      ans-=p;
      p*=2;
    }
    p=1;
}
main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n;
    ans=n*(n+1)/2;
    q();q();
    cout<<ans<<"\n";
  }
}

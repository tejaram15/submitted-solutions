//Status AC
#include<iostream>
using namespace std;
bool isPrime(int n)
{
  if (n <= 1)  return false;
  if (n <= 3)  return true;
  if (n%2 == 0 || n%3 == 0) return false;
  for (int i=5; i*i<=n; i=i+6)
      if (n%i == 0 || n%(i+2) == 0)
         return false;
  return true;
}
main()
{
	ios_base::sync_with_stdio(0);
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(isPrime(n)) cout<<"yes\n";
		else cout<<"no\n";
	}
}

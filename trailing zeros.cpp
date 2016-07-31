#include<iostream>
using namespace std;
int fto(int n)
{
	int count=0;
	for(int i=5;n/i>=1;i*=5)
		count+=n/i;
	return count;
}
main()
{
	ios_base::sync_with_stdio(0);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<fto(n)<<"\n";
	}
}

#include<iostream>
using namespace std;
#define ll long long int
int main()
{
	int n,cnt=0;
	ll x,d;
	cin>>n>>x;
	char a;
	for(int i=0;i<n;i++)
	{
		cin>>a>>d;
		if(a=='+') x+=d;
		else if(x>=d) x-=d;
		else cnt++;
	}
	cout<<x<<" "<<cnt;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,k,a,cnt=0;
	cin>>n>>k;
	while(n--)
	{
		cin>>a;
		if(a%k==0) cnt++;
	}
	cout<<cnt;
	return 0;
}

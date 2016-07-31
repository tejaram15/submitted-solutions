#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int m=1;
		for(int i=2;i<=1000;i++)
		{
			bool div=true;
			for(int j=0;j<n;j++) div &= (a[j]%i==0);
			if(div) m=i;
		}
		for(int i=0;i<n;i++)
			cout<<a[i]/m<<(i+1==n?'\n':' ');
	}
	return 0;
}

#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	long a[n+1];
	int cnt=1,len=1;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++)
	{
		if(a[i-1]<a[i]) cnt++;
		else 
		{
			len=max(cnt,len);
			cnt=1;
		}
	}
	len=max(cnt,len);
	cout<<len<<"\n";
}

#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[200],b[200],id=0,id1=0,temp,cnt=0;
void fact()
{
	id=0;
	int n_t=n;
	while(n_t)
	{
		a[id]=n_t%10;
		n_t/=10;
		id++;
	}
	for(int i=0;i<id;i++) cout<<a[i]<<" ";
	cout<<endl;
/*	for(int j=n-1;j>=1;j--)
	{
		for(int i=0;i<=id;i++)
		{
			temp=a[i]*j;
			
			//cout<<temp<<" ";
		}
		cout<<"\n";
	}*/
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		fact();
	}
	return 0;
}

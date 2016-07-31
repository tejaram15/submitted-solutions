#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int n,p1,p2,lead=0,m=0,tmp1=0,tmp2=0;
	int flag=0;
	cin>>n;
	for(int i=2;i<n+2;i++)
	{
		cin>>p1>>p2;
		tmp1+=p1;
		tmp2+=p2;
		int pl=lead;
		if(p1>p2)
		{
			lead=max(lead,tmp1-tmp2);
			if(pl!=lead) flag=1;
			
		}
		else if(p2>p1)
		{
			lead=max(lead,tmp2-tmp1);
			if(pl!=lead) flag=2;			
		}
	}
	cout<<flag<<" "<<lead;
	return 0;
}

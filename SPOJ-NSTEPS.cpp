#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if((x>=2)&&(y>=2))
		{
			if((x%2==0)&&(y%2==0)&&(x==y)) cout<<x+y;
			else if((x%2!=0)&&(y%2!=0)&&(x==y)) cout<<x+y-1;
			else cout<<"NO NUMBER"; 
		}
		else if((x==3)&&(y==1)) cout<<3;
		else if((x==2)&&(y==0)) cout<<2;
		else if((x==1)&&(y==1)) cout<<1;
		else if((x==0)&&(y==0)) cout<<0;
		else cout<<"NO NUMBER";
		cout<<"\n";
	}
	return 0;
}

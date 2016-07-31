#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n;
	cin>>t;
	string s;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int j=n-1;j>0;j--)
		{
			n*=j;
		}
		cout<<"\n"<<n<<"\n";
	}
	return 0;
}

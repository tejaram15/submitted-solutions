#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,t,cnt1=0,cnt2=0;
	cin>>t;
	while(t--)
	{
		cnt1=0;
		cnt2=0;
		cin>>n;
		string s[n+1];
		for(int j=0;j<n;j++)
		{
		cin>>s[j];
		sort(s[j].begin(),s[j].end());
		}
		for(int i=0;i<n;i++)
		{	
			for(int j=0;j<n-1;j++)
			{
				if(s[i][j]<=s[i][j+1]) cnt1++;
			}
		}
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n;i++)
			{
				if(s[i][j]<=s[i+1][j]) cnt2++;
			}
		}
		if(cnt1==cnt2) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}

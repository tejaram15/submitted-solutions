#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n,d,cnt=0,m=0;
	cin>>n>>d;
	string s,t;
	while(n--) t+="1";
	for(int i=0;i<d;i++)
	{
		cin>>s;
		if(s!=t) cnt++;
		else
		{
			m=max(cnt,m);
			cnt=0;
		}
	}
	m=max(cnt,m);
	cout<<m;
	return 0;
}

#include<bits/stdc++.h>
#define pi pair<int,int>
#define mp make_pair
using namespace std;
int main()
{
	int n,m,sum=0;
	cin>>n>>m;
	int a[n+1],b[n+1],c[n+1];
	vector<pi> v;
	vector<pi>::iterator it;
	for(int i=0;i<m;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		v.push_back(mp(a[i],b[i]));
	}
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<"\n"<<it->first<<"\t"<<it->second<<"\n";
	}
	return 0;
}

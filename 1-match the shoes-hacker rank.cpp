#include<bits/stdc++.h>
using namespace std;
#define pc(x) putchar(x)
inline bool compare(const pair<int,int> &i,const pair<int,int> &j)
{
	return i.second<j.second;
}
inline void fastRead(int *a)
{
 register char c=0;
 while (c<33) c=getchar();
 *a=0;
 while (c>33)
 {
     *a=*a*10+c-'0';
     c=getchar();
 }
}
int main()
{
	int k,m,cnt=0,temp=0;
	long long int n;
	map<int,int> m1,m2;
	fastRead(&k);
	fastRead(&m);
	scanf("%lld",&n);
	long int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		m1[a[i]]++;
	}
	vector<pair<int,int > > v1;
	pair<int,int> p;
	int i=0;
	for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++){
		p.first=it->second;
		p.second=it->first;
		v1.push_back(p);
	}
	std::sort(v1.begin(), v1.end());
    for ( vector<pair<int,int> >::iterator it=v1.end()-1;it!=v1.begin();it--,i++)
	{
		if(i<k) std::cout <<it->second<<"\n";
	}
 	return 0;
}

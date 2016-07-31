#include<bits/stdc++.h>
using namespace std;
#define gc getchar
 
inline int getn()
{
    register int c = gc();
    int x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    return x;
}
int main()
{
	int t,n,prev,curr;
	long long int cnt,r;
	t=getn();
	while(t--)
	{
		cnt=0;
		n=getn();
		prev=getn();
		r=1;
		for(int i=1;i<n;i++)
		{
			curr=getn();
			if(curr>=prev) r++;
			else {cnt+=(r*(r+1))/2; r=1;}
			prev=curr;
		}
		cnt+=(r*(r+1))/2;
		printf("%lld\n" , cnt);
	}
}

#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define gc getchar()
#define pc(x) putchar(x);
#define mod 1000000007
#define ll long long int 
ll cnt=0;
signed long int a[100005];
int t,n,k;

inline void fastRead(int *a)
{
	register char c=0;
	while (c<33) c=gc;
	*a=0;
	while (c>33)
	{
	    *a=((*a<<3)+(*a<<1))+c-'0';
	    c=gc;
	}
}

int main()
{
	fastRead(&t);
	while(t--){
		cnt=0;
		fastRead(&n);
		fastRead(&k);
		for(int i=0;i<n;i++) scanf("%ld",&a[i]);
		cnt+=n; 
		if(k>=n) cnt=(1<<n); 
		else if(k==n-1) cnt=(1<<n)-1;
		else 
	}
	return 0;
}

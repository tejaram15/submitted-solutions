#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pi acos(-1.0)
#define EPS 1e-9
#define mem(n,x) memset(n,x,sizeof(n))
typedef long long ll;

using namespace std;

int arr[100005];

int main()
{
	int n;scanf("%d",&n);
	for(int i=0;i<n;++i)scanf("%d",arr+i);

	sort(arr,arr+n);

	int cur=1;
	for(int i=0;i<n;++i)
		if(arr[i]>=cur)++cur;
	
	printf("%d\n",cur);
	return 0;
}

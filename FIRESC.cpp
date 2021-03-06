
/* Author : Vamsi Kavala */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)	
#define mod 1000000007
#define MAXN 1000010
#define MP make_pair
#define INF mod

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef long long int LL;

VI v[200010];
bool vis[200010];
LL size=0;

void dfs(int n)	//a simple depth-first search
{
	vis[n]=true;
	size++;
	REP(i,v[n].size())
		if(!vis[v[n][i]])
			dfs(v[n][i]);
	return;
}

int main(){

	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,n,m,ans=0;
		LL num=1;
		scanf("%d%d",&n,&m);

		memset(vis,0,sizeof(vis));
		REP(i,n)
			v[i].clear();

		REP(i,m)
		{
			scanf("%d%d",&a,&b);

			a--;
			b--;
			v[a].PB(b);
			v[b].PB(a);
		}

		REP(i,n)
		{
			if(!vis[i])	//if a vertex is not visited, do a dfs on it
			{
				size=0;
				ans++;	//number of connected components so far
				dfs(i);
				num*=size;	//number of ways to choose a captain for each connected component = C(size,1) = size => total ways = product of no. of ways of each component
				if(num>=mod)
					num%=mod;
			}
		}
		printf("%d %lld\n",ans,num);
	}

	return 0;
}

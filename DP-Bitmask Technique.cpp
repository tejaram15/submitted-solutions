//Dynamic Programming Problem
//Bitmask Technique
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int n;
double dist[20][20],memo[1<<16];
double matching(int bitmask)
{
	if(memo[bitmask]>-0.5)
	return memo[bitmask];
	if(bitmask==(1<<(2*n))-1)
	return memo[bitmask]=0;
	
	double ans=2000000000.0;
	for(int p1=0;p1<2*n;p1++)
		if(!(bitmask&(1<<p1))){
			for(int p2=p1+1;p2<2*n;p2++)
				if(!(bitmask&(1<<p2)))
					ans=min(ans,dist[p1][p2]+matching(bitmask|(1<<p1)|(1<<p2)));
					break;
		}
}
int main()
{
	char line[1000],name[1000];
	int i,j,caseno=1,x[20],y[20];
	while(sscanf(gets(line),"%d",&n),n)
	{
		for(i=0;i<2*n;i++)
			sscanf(gets(line),"%s%d%d",&name,&x[i],&y[i]);
		for(i=0;i<2*n;i++)
			for(j=0;j<2*n;j++)
				dist[i][j]=hypot((double)x[i]-x[j],(double)y[i]-y[j]);
		memset(memo,-1,sizeof memo);
		printf("case%d:%.21f\n",caseno++,matching(0));	
	}
	return 0;
}

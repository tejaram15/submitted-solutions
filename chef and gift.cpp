#include<stdio.h>
int main()
{
	int t,n,k,cnt,j,i;
	scanf("%d",&t);
	while(t--)
	{
	    cnt=0;
	    j=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
		 scanf("%d",&j);
		 if(j%2==0) cnt++;
		 }
        if(cnt==n&&k==0)
			printf("NO");
		else if(cnt>=k)
			printf("YES");
		else
			printf("NO");
			putchar('\n');
	}
}

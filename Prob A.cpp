#include<stdio.h>

int sum(int i)
{
	int ans=0;
	while(i>0)
	{
		ans=ans+i%10;
		i=i/10;
	}
	return ans;
}

int main()
{
	int n,temp,ans,i;
	scanf("%d",&n);
	temp=n-100;
	if(temp<1)
	{
		temp=1;
	}
	ans=0;
	for(i=temp;i<n;i++)
	{
		if(i+sum(i)+sum(sum(i))==n)
			ans++;
	}
	printf("%d\n",ans);

return 0;
}

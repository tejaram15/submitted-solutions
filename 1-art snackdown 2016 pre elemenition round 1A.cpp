#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,cnt=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int c[n],cnt1=0,cnt2=0;
		for(int i=0;i<n;i++) 
			scanf("%d",&c[i]);
		for(int i=n-1;i>=2;i--)
		{
			if(c[i]==c[i-1]==c[i-2]) cnt1+=3;
		}
		 if((cnt1%3==0)&&(cnt1>0)) cout<<"yes";//printf("%d--%d,",cnt1,cnt2);
		 else cout<<"no";
		 putchar('\n');
	}
	return 0;
}

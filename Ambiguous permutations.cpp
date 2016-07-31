#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		int a[n],pos[n];
		memset(a,sizeof(a),0);
		memset(pos,sizeof(pos),0);
		for(int i=1;i<=n;i++)
		{
		  cin>>a[i];
		  pos[a[i]]=i;
		}
		/*cout<<"\n";
		for(int i=1;i<=n;i++) cout<<a[i]<<" - "<<pos[i]<<"\n";
		cout<<"\n";*/
		bool state=false;
		for(int i=1;i<=n;i++)
			if(a[i]!=pos[i]) state=true;
		if (!state) cout<<"ambiguous";
		else cout<<"not ambiguous";
		cout<<"\n";
	cin>>n;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str("ab"),st("bc");
	int t,n,cnt1=0,cnt2=0;
	vector<int> v1,v2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		str=str+st;
		//cout<<str;
		cnt1=0;
		cnt2=0;
		for(int i=0;i<str.length();i++)
		{
			v1.push_back(i+1);
			for(int j=0;j<str.length();j++)
			{
					v2.push_back(j+1);
					bool state1=binary_search(v1.begin(), v1.end(), j+1);
					bool state2=binary_search(v2.begin(), v2.end(), i+1);
				if((str[i]==str[j])&&(i==j))
				{
				    //printf("%d--%d,,,%c--%c\n",i+1,j+1,str[i],str[j]);
				    cnt1++;
				}
				else if((i!=j)&&(str[i]==str[j])&&(state1!=state2))
				{
					//printf("\t\t%d--%d,,,%c--%c\n",i+1,j+1,str[i],str[j]);
					cnt2++;
				}
			}
			v2.clear();
			//printf("\n");
		}
		cout<<"\n\ncnt1="<<cnt1+(cnt2/2);
		if((cnt1+(cnt2/2))==n) cout<<str<<"\n";
	}
	return 0;
}

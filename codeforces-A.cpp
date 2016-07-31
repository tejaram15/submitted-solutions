#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ini,fi,cnt=0;
	string s;
	char flag;
	cin>>n;
	while(n--)
	{
		cin>>s>>ini>>fi;
		if((fi>ini)&&(ini>=2400)) cnt++;
	}
	if(cnt>0)
	cout<<"YES";
	else cout<<"NO";
	return 0;
}


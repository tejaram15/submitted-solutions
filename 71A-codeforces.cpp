#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,cnt=0;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		cnt=s.length();
		if(cnt>10)
		cout<<s[0]<<cnt-2<<s[cnt-1];
		else cout<<s;
		cout<<"\n";
	}
	return 0;
}

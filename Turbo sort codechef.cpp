#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	int a[t+1];
	for(int i=0;i<t;i++) cin>>a[i];
	sort(a,a+t);
	for(int i=0;i<t;i++) cout<<a[i]<<"\n";	
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n,k,cnt,val;
	cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	 cnt=0;
	 val=a[k];
	 for(int i=0;i<n;i++)
	 	if((a[i]>0)&&(a[i]>=val)) cnt++;
	cout<<cnt;
	return 0;
}

//My own segment tree using array
#include<iostream>
#include<cmath>
using namespace std;
void build(int a[],int st[],int low,int high,int pos)
{
	if(low==high){st[pos]=a[low];return;}
	int mid=(low+high)/2;
	build(a,st,low,mid,2*pos+1);
	build(a,st,mid+1,high,2*pos+2);
	st[pos]=min(st[2*pos+1],st[2*pos+2]);
}
main()
{
	int n;cin>>n;
	int sz;//size of the segment tree
	if(!(n&(n-1))) sz=n*2-1;
	else
	{
		sz=ceil(log2(n));
		sz=(1<<sz);
		sz=sz*2-1;
	}
	//cout<<sz<<"\n";
	int a[n],st[sz];
	for(int i=0;i<n;i++) cin>>a[i];
	build(a,st,0,n-1,0);
	for(int i=0;i<sz;i++) cout<<st[i]<<"  ";
}

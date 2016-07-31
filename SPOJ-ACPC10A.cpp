#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a1,a2,a3,res;
	cin>>a1>>a2>>a3;
	while((a1!=0)&&(a2!=0)&&(a3!=0))
	{
		if(abs(a2-a1)==abs(a3-a2))
		{
			int diff=a2-a1;
			cout<<"AP "<<a3+diff;
		}
		else if((a2/a1)==(a3/a2))
		{
			int div=a2/a1;
			cout<<"GP "<<a3*div;
		}
		cout<<"\n";
		cin>>a1>>a2>>a3;
	}
	return 0;
}

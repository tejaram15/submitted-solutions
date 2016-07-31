#include<iostream>
int main()
{
	int t,n,sum=0;
	std::cin>>t;
	while(t--){std::cin>>n; if(n>0) sum+=n;}
	std::cout<<sum;
	return 0;
}

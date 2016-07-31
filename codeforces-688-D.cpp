#include <bits/stdc++.h>
using namespace std;

long long n,k,a,b=1,i,l;

main(){
	ios::sync_with_stdio(0);
	
	cin>>n>>k;
	
	while(i<n){
		cin>>a;
		b=b*a/__gcd(b,a);
		b=__gcd(b,k);
		if(b==k){cout<<"Yes";return 0;}
		i++;
	}
	cout<<"No";
}

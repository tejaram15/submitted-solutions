#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long int n,m,ans=0,i=1;
    cin>>n>>m;
	while(i<=n){
		ans+=(m+5-(5-i%5))/5; i++;
	}cout<<ans;
	return 0;
}

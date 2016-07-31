#include<bits/stdc++.h>
using namespace std;
long int arr[100005];
long int dp[100005];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%ld",&arr[i]);
    long int ans=0;
    dp[0]=1;
    for(i=1;i<n;i++)
         {
            if(arr[i]>arr[i-1])
                dp[i]=dp[i-1]+1;
            else
                dp[i]=1;
         }
      for(i=n-2;i>=0;i--)
      {
          if(arr[i]>arr[i+1])
            dp[i]=max(dp[i],dp[i+1]+1);
      }
     for(i=0;i<n;i++)
     {
         ans=ans+dp[i];
     }
    cout<<ans<<endl;
    return 0;
}

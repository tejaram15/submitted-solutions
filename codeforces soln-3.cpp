#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN = 1001 * 1001;

vector < pair < int , int > > a [ MAXN ]  ;

int aa [ MAXN ] = {} , mark [ MAXN ] = {} , ans = 0 ;

void dfs(int u , int x , int f)
{
    if(x>aa[u])
        f = 1 ;
    if(f)
        ans++;
    for(auto v : a[u])
    {
        dfs(v.first,max(0ll,v.second+x),f);
    }
}

main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n ;
   cin >> n ;
   for(int i = 1 ; i <= n ; i ++ )
    cin >> aa[i];
   int x , val;
   for(int i = 2 ; i <= n ; i ++ )
   {
       cin >> x >> val ;
       a[x].push_back({i,val});
   }
   dfs(1,0,0);
   cout << ans ;
}

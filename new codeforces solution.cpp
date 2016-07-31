//By Arima, contest: Codeforces Round #358 (Div. 2), problem: (C) Alyona and the Tree, Accepted, #
 #include <bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define ff(i,a,b) for(int i = (a); i <= (b); i++)
#define fr(i,a,b) for(int i = (a); i >= (b); i--)
#define REP( i , n ) for( int i = 0 ; i < n ; i++ )
#define REPI( n , i ) for( int i = n ; i >= 0 ; i-- )
#define sc( x ) scanf( "%d" , &x )
#define sc2( x , y ) scanf( "%d%d" , &x , &y )
#define scd( x ) scanf( "%.9f" , &x )
#define scl( x ) scanf( "%I64d" , &x )
#define pf( x ) printf( "%d\n" , x )
#define pfd( x ) printf( "%.9f\n" , x )
#define pfl( x ) printf( "%I64d\n" , x )
#define rrc( x ) return cout << x , 0 ;
#define all( v ) v.begin(),v.end()
#define all_r( v ) v.rbegin() , v.rend()
#define fi first
#define se second
#define endl '\n'
#define SZ(a) int(a.size())
#define pb push_back
#define cln( x , v ) memset( x , v , sizeof( x ) )
#define pi acos(-1.0)
#define e2( x ) ( ( x )*( x ) )
#define r2( x ) sqrt( 1.0*( x ) )
#define ones(x) __builtin_popcount(x)
#define MCM( a , b ) ( ( a*b )/( __gcd( a , b ) ) )
#define ddd cout << "despues" << endl ;
#define sss cout << "------------------" << endl ;
#define aaa cout << "antes" << endl ;
#define da( a , b ) ( (a)/(b) - ( (a) < 0 && (a)%(b) != 0 ) )
#define ceil_( a , b ) ( da( (a) , (b) ) + ((a)%(b) > 0) )
#define Mm greater<int>

typedef double db ;
typedef long double ld ;
typedef long long ll ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<ll> vl ;
typedef vector<bool> vb ;
typedef pair<int,int> pii ;
typedef vector<pii> vpii ;
const ld EPS = 1e-6 ;
const int INF = (int)( INT_MAX - 100 ) ;
const ll mod = (int)( 1e+9 + 7 ) ;
const int N = (int)( 1e5 ) ;
//inline ll modulo( ll num ){ ( ( num %= mod ) += mod ) %= mod ; return num ; }
//inline ll pot( int b , int e ){ ll p = 1 ; REP( i , e ) p = (p*b)%mod ; return p ; }

vpii vec[ N + 1 ] ;
int a[ N + 1 ] ;

int dfs( int v , ll Sb ){
	if( Sb > a[ v ] ) return 0 ;
	if( Sb < 0 ) Sb = 0 ;
	int ans = 1 ;
	for( pii u : vec[ v ] )
		ans += dfs( u.fi , Sb + u.se ) ;
	return ans ;
}

int main()
{
//	ios_base::sync_with_stdio(0);
	int n ;
	cin >> n ;
	ff( i , 1 , n ) cin >> a[ i ] ;
	int p , c ;
	ff( i , 1 , n - 1 ){
		cin >> p >> c ;
		vec[ p ].pb( { i + 1 , c } ) ;
	}
	cout << n - dfs( 1 , 0 ) ;

	return 0 ;
}


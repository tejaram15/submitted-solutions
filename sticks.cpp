#include"iostream"
#include"vector"
#include"map"
#include"algorithm"
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  int t,n,a;
  cin>>t;
  while(t--)
  {
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)  cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    vector<pair<int,int> > v;
    for (int i = 0; i + 1 < n; ++i) {
      if (a[i] == a[i + 1]) {
        v.push_back(make_pair(a[i], a[i + 1]));
        ++i;
      }
    }
    if (v.size() < 2) {
      cout << "-1\n";
      continue;
    }
    cout << 1LL * v[0].first * v[1].first << '\n';
  }
  return 0;
}

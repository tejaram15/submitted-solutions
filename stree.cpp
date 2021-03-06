#include"bits/stdc++.h"
using namespace std;

const int N = 1e5;  // limit for array size
int t[2 * N];

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int p, int value) {  // set value at position p
  for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}

int main() {
  int n,q;
  scanf("%d %d", &n,&q);
  for (int i = 0; i < n; ++i) scanf("%d", t + n + i);
  build();
  while(q--)
  {
    int p,x,y;
    cin>>p>>x>>y;
    if(p==1) modify(x, y);
    else if(p==2) printf("%d\n", query(x, y));
  }
  return 0;
}

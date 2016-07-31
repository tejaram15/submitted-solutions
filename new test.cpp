#include <algorithm>
#include <cstdio>
#include <stack>
using namespace std;

#define MAX_N 100000

void print_array(const char *s, int a[], int n) {
  for (int i = 0; i < n; ++i) {
    if (i) printf(", ");
    else printf("%s: [", s);
    printf("%d", a[i]);
  }
  printf("]\n");
}

void reconstruct_print(int end, int a[], int p[]) {
  int x = end;
  stack<int> s;
  for (; p[x] >= 0; x = p[x]) s.push(a[x]);
  printf("[%d", a[x]);
  for (; !s.empty(); s.pop()) printf(", %d", s.top());
  printf("]\n");
}

int main() {
  int n = 4, A[] = {1,3,2,4};
  int L[MAX_N], L_id[MAX_N], P[MAX_N],pos[MAX_N];
  int lis=0 , lis_end=0 ,nlis=0 , nlis_end=0;
  for (int i = 0; i < n; ++i) {
    pos[i] = lower_bound(L, L + lis, A[i]) - L;
    L[pos[i]] = A[i];
    L_id[pos[i]] = i;
    P[i] = pos[i] ? L_id[pos[i] - 1] : -1;
    if (pos[i] + 1 > lis) {
      lis = pos[i] + 1;
      lis_end = i;
    }
	if(pos[i+1]>nlis)
	{
		nlis=pos[i+1];
		nlis_end=i+1;
	}
  	reconstruct_print(lis_end, A, P);
	reconstruct_print(lis, A, P);
	printf("\n");
  	reconstruct_print(nlis_end, A, P);
	reconstruct_print(nlis, A, P);
	printf("\n");
  }
  return 0;
}

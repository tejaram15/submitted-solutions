#include <algorithm>
#include <cstdio>
#include <stack>
using namespace std;

#define MAX_N 100000

inline void reconstruct_print(int end, int a[],int p[]) {
  int x = end;
  stack<int> s;
  for (; p[x] >= 0; x = p[x]) s.push(a[x]);
  printf("[%d", a[x]);
  for (; !s.empty(); s.pop()) printf(", %d", s.top());
  printf("]\n");
}

int main() {
  int n = 7,cnt=0;
  int A[n];
  for(int i=0;i<n;i++) A[i]=i+1;
  do{
  	 int L[MAX_N], L_id[MAX_N], P[MAX_N];
     int lis = 0, lis_end = 0,pos[MAX_N];
	 for (int i = 0; i < n; i++) 
	  {
	    pos[i] = lower_bound(L, L + lis, A[i]) - L;
	    L[pos[i]] = A[i];
	    L_id[pos[i]] = i;
	    P[i] = pos[i] ? L_id[pos[i] - 1] : -1;
	    if (pos[i] + 1 > lis)
		{
	      lis = pos[i] + 1;
	      lis_end = i;
	    }
	  }
	  if(lis==2){
	printf("\nFinal LIS is of length %d: ", lis);
	reconstruct_print(lis_end, A, P);
	cnt++;
	}
  }while(next_permutation(A,A+n));
  printf("\n%d",cnt);
  return 0;
}

#include <cstdio>

int main(){
	int T, N, rec[50];
	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		for(int i=0; i<N; i++)
			scanf("%d", rec+i);
		int gcd=rec[0];
		for(int i=0; i<N; i++){
			int t=gcd;
			while((rec[i]%t) || (gcd%t))
				t--;
			gcd=t;
		}
		for(int i=0; i<N; i++){
			printf("%d", rec[i]/gcd);
			putchar(i==N-1 ? '\n' : ' ');
		}
	}
	return 0;
}

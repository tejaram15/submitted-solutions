#include<stdio.h>
 
int main()
{
    int c[50], vote[50];
    int t, n, i, j, tmp;
 
    scanf("%d", &t);
    while(t--) {
        int count=0, max=0;
 
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d", &tmp);
            c[i] = tmp;
            count += c[i];
            if (c[i] > max)
                max = c[i];
        }
 
        if (count != n || max == n)
            printf("-1\n");
        else {
            for(i=0; i<n; i++) 
                vote[i] = -1;
 
            for(i=0; i<n; i++) {
                j = (i+1) % n;
                while(1) {
                    if (c[j] > 0) {
                        vote[i] = j;
                        c[j]--;
                        break;
                    }
                    j = (j+1) % n;
                }
            }
 
            int b=0, self_vote;
            for (i=0; i<n; i++) {
                if (vote[i] == i) {
                    b++;
                    self_vote = i;
                }
            }
 
            // claiming that is always 1
            if (b > 1)
                return 1;
            else if (b == 1){
                j = -1;
                for (i=0; i<n; i++) {
                    if (vote[i] != self_vote) {
                        j = i;
                        break;
                    }
                }
 
                tmp = vote[self_vote];
                vote[self_vote] = vote[j];
                vote[j] = tmp;
            }
 
            for(i=0; i<n; i++) {
                if (i==n-1)
                    printf("%d\n", vote[i]+1);
                else
                    printf("%d ", vote[i]+1);
            }
        }
    }
    return 0;
}

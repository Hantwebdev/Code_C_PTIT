#include<stdio.h>
int main(){
    int T; scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n, m, p; scanf("%d%d%d", &n, &m, &p);
        int a[n], b[m];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int j = 0; j < m; j++) scanf("%d", &b[j]);
        printf("Test %d:\n", t);
        for(int i = 0; i < n + m; i++){
            if(i < p) printf("%d ", a[i]);
            else if(i >= p && i < p + m) printf("%d ", b[i - p]);
            else printf("%d ", a[i - m]);
        }
        printf("\n");
    }
}
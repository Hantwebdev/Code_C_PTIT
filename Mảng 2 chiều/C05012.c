#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++){
        int n; scanf("%d", &n);
        int a[n + 1][n + 1], b[n + 1][n + 1];
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++) a[i][j] = j;
            for (int j = i + 1; j <= n; j++) a[i][j] = 0;
        }
        printf("Test %d:\n", t);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                b[i][j] = a[j][i];
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                int x = 0;
                for (int k = 1; k <= n; k++)
                    x += a[i][k] * b[k][j];
                printf("%d ", x);
            }
            printf("\n");
        }
    }
}
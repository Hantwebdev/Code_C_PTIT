#include<stdio.h>
int main(){
    int T; scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n , m; scanf("%d%d", &n, &m);
        int a[n][m];
        int maxh = -1e9, maxc = -1e9, h, c;
        for(int i = 0; i < n; i++){
            int sumh = 0;
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
                sumh += a[i][j];
                if(sumh > maxh){
                    maxh = sumh;
                    h = i;
                }
            }
        }
        for(int i = 0; i < m; i++){
            int sumc = 0;
            for(int j = 0; j < n; j++){
                if(j != h){
                    sumc += a[j][i];
                    if(sumc > maxc){
                        maxc = sumc;
                        c = i;
                    }
                }
                
            }
        }
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            if(i != h){
                for(int j = 0; j < m; j++){
                    if(j != c){
                        printf("%d ", a[i][j]);
                    }
                }
                printf("\n");
            }
        }
    }
}
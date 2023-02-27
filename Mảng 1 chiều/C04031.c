#include<stdio.h>
int main(){
    int T; scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n; scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        int res = 0, cnt = 0, mark[n], len = 1;
        for(int i = 1; i < n; i++){
            if(a[i] > a[i-1]) ++len;
            else len = 1;
            if(len > res){
                res = len;
                mark[0] = i - res + 1;
                cnt = 1;
            }
            else if(len == res){
                mark[cnt++] = i - res + 1;
            }
        }
        printf("Test %d:\n", t);
        printf("%d\n", res);
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < res; j++){
                printf("%d ", a[mark[i] + j]);
            }
            printf("\n");
        }
    }
}
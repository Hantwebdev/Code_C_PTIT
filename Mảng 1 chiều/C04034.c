#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n], mark[1001] = {0}, cnt = 0, max = -1e9;
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = n - 1; i >= 0; i--){
            if(a[i] > max){
                max = a[i];
                mark[cnt++] = a[i];
            }
        }
        for(int i = cnt - 1; i >= 0; i--) printf("%d ", mark[i]);
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n], mark[n], cnt = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0) mark[cnt++] = a[i];
        }
        for(int j = 0; j < cnt; j++) printf("%d ", mark[j]);
        printf("\n");
    }
}
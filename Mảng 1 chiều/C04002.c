#include<stdio.h>
#include<math.h>
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n], mark[n], cnt = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(prime(a[i])) mark[cnt++] = a[i];
        }
        for(int j = 0; j < cnt; j++) printf("%d ", mark[j]);
        printf("\n");
    }
}
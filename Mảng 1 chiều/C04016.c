#include<stdio.h>
#include<math.h>
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int T; scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n; scanf("%d", &n);
        int max = -1e9;
        int a[n], cnt[100001] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i] > max) {max = a[i];}
            if(prime(a[i])) {cnt[a[i]]++;}
        }
        printf("Test %d:\n", t);
        for(int i = 2; i <= max; i++){
            if(cnt[i] != 0){
                printf("%d xuat hien %d lan\n", i, cnt[i]);
            }
        }
    }
}
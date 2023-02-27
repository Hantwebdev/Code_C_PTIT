#include<stdio.h>
int main(){
    int T; scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n; scanf("%d", &n);
        int a[n], cnt[100001] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            cnt[a[i]] ++;
        }
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            if(cnt[a[i]] != 0){
                printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
                cnt[a[i]] = 0;
            }
        }
    }
}
#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    int a[n], cnt[10001] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    int b[n], dem = 0;
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] > 1){
            b[dem++] = a[i];
            cnt[a[i]] = 0;
        }
    }
    printf("%d\n", dem);
    for(int j = 0; j < dem; j++) printf("%d ", b[j]);
}
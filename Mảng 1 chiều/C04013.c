#include<stdio.h>
int cnt[100001] = {0};
int mark[100001] = {0};
int main(){
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]] ++;
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            mark[j++] = a[i];
            cnt[a[i]] = 0;
        }
    }
    printf("%d\n", j);
    for(int i = 0; i < j; i++) printf("%d ", mark[i]);
}
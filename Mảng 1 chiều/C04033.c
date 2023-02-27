#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    int a[n], mark[101] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        mark[a[i]]++;
    }
    int b[n], cnt = 0;
    for(int i = 0; i < n; i++){
        if(mark[a[i]] != 0){
            b[cnt++] = a[i];
            mark[a[i]] = 0;
        }
    }
    for(int j = 0; j < cnt; j++) printf("%d ", b[j]);
}
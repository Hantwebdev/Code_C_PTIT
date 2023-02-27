#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n], max = -1e9, cnt = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i] > max){
                max = a[i];
                cnt ++;
            }
        }
        printf("%d\n", cnt);
    }
}
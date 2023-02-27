#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n], sum = 0, max = -1e9;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            sum += a[i];
            if(sum > max) max = sum;
            else if(sum < 0) sum = 0;
        }
        printf("%d\n", max);
    }
}
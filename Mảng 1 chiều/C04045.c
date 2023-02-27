#include<stdio.h>
int check(int a[], int n){
    int c = 0, l = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) ++c;
        else ++l;
    }
    if(n % 2 == 0 && c > l) return 1;
    if(n % 2 != 0 && l > c) return 1;
    return 0;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n = 0, a[10001] = {0};
        while(1){
            scanf("%d", &a[++n]);
            char c = getchar();
            if(c == '\n') break;
        }
        check(a, n) ? printf("YES\n") : printf("NO\n");
    }
}
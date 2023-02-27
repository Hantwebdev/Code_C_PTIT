#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int mark[100005] = {0};
    for (int i = 1; i < n; i++){
        int a, b; scanf("%d %d", &a, &b);
        mark[a]++;
        mark[b]++;
    }
    for (int i = 1; i <= n; i++){
        if (mark[i] != 1 && mark[i] != n - 1){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}
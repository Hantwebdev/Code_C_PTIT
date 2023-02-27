#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int start = i;
        int range = n - 1;
        for(int j = 1; j <= i; j++){
            printf("%d ", start);
            start += range;
            range -= 1;
        }
        printf("\n");
    }
}
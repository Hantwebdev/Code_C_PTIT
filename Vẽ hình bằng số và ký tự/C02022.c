#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int cnt;
        if(i % 2 == 0) cnt = i * (i + 1) / 2;
        else cnt = i * (i + 1) / 2 - i + 1;
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0) printf("%d ", cnt --);
            else printf("%d ", cnt ++);
        }
        printf("\n");
    }
}

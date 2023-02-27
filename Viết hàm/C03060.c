#include <stdio.h>
int main(){
    int n, k; scanf("%d %d", &n, &k);
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            int j = i;
            while (j % 2 == 0){
                cnt++;
                j /= 2;
            }
        }
    }
    cnt >= k ? printf("Yes") : printf("No");
}
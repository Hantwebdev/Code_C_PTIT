#include <stdio.h>
int main(){
    int t; scanf("%d", &t);
    while (t--){
        int n, p; scanf("%d %d", &n, &p);
        int x = 0;
        for (int i = 1; i <= n; i++)
            if (i % p == 0){
                int num = i;
                while (num % p == 0){
                    x++;
                    num /= p;
                }
            }
        printf("%d\n", x);
    }
}
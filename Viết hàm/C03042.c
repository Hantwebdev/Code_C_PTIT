#include <stdio.h>
int check(int n){
    int surplus = n % 10;
    n /= 10;
    while (n > 0){
        if (n % 10 <= surplus)
            return 0;
        surplus = n % 10;
        n /= 10;
    }
    return 1;
}
int main(){
    int t; scanf("%d", &t);
    while (t--){
        int a, b; scanf("%d %d", &a, &b);
        int cnt = 0;
        for (int i = a; i <= b; i++)
            if (check(i)) cnt++;
        printf("%d\n", cnt);
    }
}
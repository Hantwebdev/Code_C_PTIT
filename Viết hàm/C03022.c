#include <stdio.h>
#include <math.h>
int sum(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum % 5 == 0;
}
int prime(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int main(){
    int n; scanf("%d", &n);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (sum(i) && prime(i)){
            printf("%d ", i);
            cnt++;
        }
    printf("\n%d", cnt);
}
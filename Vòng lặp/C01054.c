#include <stdio.h>
#define limit 2000000
int a[limit + 1] = {0};
void eratosthenes(){
    for (int var = 2; var * var <= limit; var++)
        if (a[var] == 0)
            for (int j = var * var; j <= limit; j += var)
                if (a[j] == 0)
                    a[j] = var;
    for (int var = 2; var <= limit; var++)
        if (a[var] == 0)
            a[var] = var;
}

int Sum(int n){
    int sum = 0;
    while (n != 1){
        sum += a[n];
        n /= a[n];
    }
    return sum;
}

int main(){
    eratosthenes();
    int t; scanf("%d", &t);
    long long sum = 0;
    while (t--){
        int n; scanf("%d", &n);
        sum += Sum(n);
    }
    printf("%lld", sum);
}

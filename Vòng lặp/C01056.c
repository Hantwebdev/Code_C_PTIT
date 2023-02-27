#include <stdio.h>
#include <stdbool.h>
bool check(long long number){
    int surplus = number % 10;
    number /= 10;
    while (number > 0){
        if (number % 10 > surplus)
            return 0;
        surplus = number % 10;
        number /= 10;
    }
    return 1;
}

int main(){
    int test; scanf("%d", &test);
    while (test--){
        long long number; scanf("%lld", &number);
        check(number) ? printf("YES\n") : printf("NO\n");
    }
}
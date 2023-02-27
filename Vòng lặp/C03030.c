#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int number){
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

void solve(){
    int number; scanf("%d", &number);
    int left = pow(10, number - 1);
    int right = pow(10, number) - 1;
    for (int var = left; var <= right; var ++)
        if (check(var))
            printf("%d ", var);
    printf("\n");
}

int main(){
    int test; scanf("%d", &test);
    while (test--)
        solve();
}
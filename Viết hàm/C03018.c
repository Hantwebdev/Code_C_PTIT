#include <stdio.h>
#include <math.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int prime(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int fibo(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (sum == 1 || sum == 2 || sum == 3 || sum == 5 || sum == 8 || sum == 13 || sum == 21)
        return 1;
    else
        return 0;
}
int main(){
    int a, b; scanf("%d %d", &a, &b);
    if (a > b)
        swap(&a, &b);
    for (int i = a; i <= b; i++)
        if (prime(i))
            if (fibo(i))
                printf("%d ", i);
}
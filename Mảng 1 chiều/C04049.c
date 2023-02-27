#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
    while(b != 0){
        int surplus = a % b;
        a = b;
        b = surplus;
    }
    return a;
}
long long lcm(int a, int b){
    return (long long) a * b / gcd(a, b);
}
int main(){
    int t; scanf("%d", &t);
    while (t--){
        int n; scanf("%d", &n);
        int a[n + 1], b[n + 2];
        for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
        b[1] = a[1];
        for (int i = 2; i <= n; i++)
            b[i] = lcm(a[i - 1], a[i]);
        b[n + 1] = a[n];
        for (int i = 1; i <= n + 1; i++)
            printf("%d ", b[i]);
        printf("\n");
    }
}
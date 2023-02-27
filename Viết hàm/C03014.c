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
    while(t--){
        int a, b; scanf("%d%d", &a, &b);
        printf("%lld %d\n", lcm(a, b), gcd(a, b));
    }
}
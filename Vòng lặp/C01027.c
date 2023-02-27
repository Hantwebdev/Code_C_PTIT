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
int main(){
    int test;
    scanf("%d", &test);
    while (test --){
        int a, b; 
        scanf("%d%d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
}
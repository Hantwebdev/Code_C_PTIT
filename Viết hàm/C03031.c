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
    int t; scanf("%d", &t);
    while(t--){
        int a, b, c, d; scanf("%d%d%d%d", &a, &b, &c, &d);
        gcd(a, b) == gcd(c, d) ? printf("YES\n") : printf("NO\n");
    }
}
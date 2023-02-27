#include<stdio.h>
int check(int number){
    int sum = 0;
    while(number > 0){
        sum += number % 10;
        number /= 10;
    }
    return sum % 10 == 0;
}
int main(){
    int test; scanf("%d", &test);
    while(test --){
        int number; scanf("%d", &number);
        check(number) ? printf("YES\n") : printf("NO\n");
    }
}
#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    while (test --){
        int number; 
        scanf("%d", &number);
        int end = number % 10;
        while (number >= 10){
            number /= 10;
        }
        number == end ? printf("YES\n") : printf("NO\n");
    }
}
#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    while (test --){
        int number; 
        scanf("%d", &number);
        int temporary, sum = 0;
        while (number > 0){
            temporary = number % 10;
            sum += temporary;
            number /= 10;
        }
    printf("%d\n", sum);
    }
}
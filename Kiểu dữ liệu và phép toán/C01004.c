#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long number;
        scanf("%ld", &number);
        printf("%.15f\n", (double) 1/number);
    } 
}
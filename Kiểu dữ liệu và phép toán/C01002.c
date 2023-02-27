#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        long number;
        scanf("%ld", &number);
        printf("%ld\n", 2 * number);
    } 
}
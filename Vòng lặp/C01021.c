#include<stdio.h>
int main(){
    int number; 
    scanf("%d", &number);
    int temporary, sum = 0;
    while (number > 0){
        temporary = number % 10;
        sum += temporary;
        number /= 10;
    }
    printf("%d", sum);
}
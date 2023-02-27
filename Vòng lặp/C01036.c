#include<stdio.h>
int main(){
    int number; 
    scanf("%d", &number);
    int temporary, mul = 1;
    while (number > 0){
        temporary = number % 10;
        mul *= temporary;
        number /= 10;
    }
    printf("%d", mul);
}
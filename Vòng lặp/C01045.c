#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    int temporary = number;
    while (number > 0){
        if (number < 10)
            printf("%d ", number);
        number /= 10;
    }
    printf("%d", temporary % 10);
}
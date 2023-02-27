#include <stdio.h>
#include <math.h>
int main(){
    int number;
    scanf("%d", &number);
    int temporary = number, cnt = 0;
    int start, end = number % 10;
    while (temporary > 0){
        if (temporary < 10)
            start = temporary;
        cnt++;
        temporary /= 10;
    }
    number = number - end - start * pow(10, cnt - 1) + start + end * pow(10, cnt - 1);
    printf("%lld", number);
}
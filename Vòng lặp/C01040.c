#include <stdio.h>
#include <math.h>
int main(){
    int number;
    scanf("%d", &number);
    int sum = 1;
    for (int var = 2; var <= sqrt(number); var++)
        if (number % var == 0){
            sum += var;
            sum += number / var;
            if (var * var == number)
                sum -= var;
        }
    sum == number ? printf("1") : printf("0");
}
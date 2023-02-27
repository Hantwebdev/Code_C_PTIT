#include <stdio.h>
#include <math.h>
int main(){
    int number;
    scanf("%d", &number);
    for (int var = 2; var <= sqrt(number); var ++){
        while (number % var == 0){
            number /= var;
            printf("%d", var);
            if (number != 1)
                printf("x");
            else
                return 0;
        }
    }
    printf("%d", number);
}
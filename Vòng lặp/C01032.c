#include <stdio.h>
#include <math.h>
int multiply(int number){
    int res = 1;
    for (int var = 2; var <= sqrt(number); var ++){
        if (number % var == 0){
            res *= var;
            while (number % var == 0)
                number /= var;
            if (number == 1)
                return res;
        }
    }
    return res * number;
}

int main(){
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int number;
        scanf("%d", &number);
        printf("%d\n", multiply(number));
    }
}
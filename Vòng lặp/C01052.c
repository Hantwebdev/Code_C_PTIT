#include <stdio.h>
#include <math.h>
int main(){
    int test;
    scanf("%d", &test);
    while (test--){
        int number;
        scanf("%d", &number);
        int cnt = 0;
        for (int var = 1; var <= sqrt(number); var++){
            if (number % var == 0){
                if (var % 2 == 0)
                    cnt++;
                if ((number / var) % 2 == 0)
                    cnt++;
                if (var * var == number && var % 2 == 0)
                    cnt -= 1;
            }
        }
        printf("%d\n", cnt);
    }
}
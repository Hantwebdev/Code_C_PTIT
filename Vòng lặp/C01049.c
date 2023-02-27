#include <stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    while (test--){
        int number;
        scanf("%d", &number);
        int even = 0, odd = 0;
        while (number > 0){
            if ((number % 10) % 2 == 0)
                even ++;
            else
                odd ++;
            number /= 10;
        }
        printf("%d %d\n", odd, even);
    }
}
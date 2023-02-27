#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    int even = 0, odd = 0, temporary;
    while (number > 0){
        temporary = number % 10;
        if (temporary % 2 == 0)
            even++;
        else
            odd++;
        number /= 10;
    }
    printf("%d %d", odd, even);
}
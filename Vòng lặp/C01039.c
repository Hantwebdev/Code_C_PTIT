#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    int cnt = 0;
    while (number > 0){
        number /= 10;
        cnt++;
    }
    printf("%d", cnt);
}
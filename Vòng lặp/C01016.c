#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    for(int var = 1; var <= 10; var ++){
        printf("%d ", var * number);
    }
}
#include<stdio.h>
#include<math.h>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int factorial(int number){
    int res = 1;
    for (int var = 1; var <= number; var ++)
        res *= var;
    return res;
}
int check(int number){
    int sum = 0;
    int temporary = number;
    while (temporary > 0){
        sum += factorial(temporary % 10);
        temporary /= 10;
    }
    return sum == number;
}
int main(){
    int a, b; scanf("%d%d", &a, &b);
    if(a > b) swap(&a, &b);
    for(int var = a; var <= b; var ++){
        if(check(var)) printf("%d ", var);
    }
}
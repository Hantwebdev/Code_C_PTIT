#include<stdio.h>
#include<math.h>
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
    int number; scanf("%d", &number);
    for(int var = 1; var < number; var ++){
        if(check(var)) printf("%d ", var);
    }
}
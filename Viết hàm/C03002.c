#include<stdio.h>
#include<math.h>
int prime(int number){
    for(int var = 2; var <= sqrt(number); var ++){
        if(number % var == 0) return 0;
    }
    return number > 1;
}
int main(){
    int number; scanf("%d", &number);
    for (int var = 2; var <= number; var ++){
        if(prime(var)) printf("%d\n", var);
    }   
}
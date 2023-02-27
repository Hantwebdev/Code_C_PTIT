#include<stdio.h>
#include<math.h>
int main(){
    int test;
    scanf("%d", &test);
    while (test --){
        int number;
        scanf("%d", &number);
        for (int var = 2; var <= sqrt(number); var ++){
            while(number % var == 0){
                printf("%d ", var);
                number /= var;
            }
        }
        if(number > 1) printf("%d", number);
        printf("\n");    
    }
}
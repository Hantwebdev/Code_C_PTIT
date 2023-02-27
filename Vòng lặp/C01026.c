#include<stdio.h>
#include<math.h>
int check_prime(int number){
    if(number <= 1) return 0;
    for (int var = 2; var <= sqrt(number); var ++){
        if(number % var == 0) return 0;
    }
    return 1;
}
int main(){
    int test;
    scanf("%d", &test);
    while (test --){
        int number; 
        scanf("%d", &number);
        check_prime(number) ? printf("YES\n") : printf("NO\n");
    }
}
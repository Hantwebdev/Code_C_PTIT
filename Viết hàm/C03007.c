#include<stdio.h>
#include<math.h>
int prime(int number){
    for(int var = 2; var <= sqrt(number); var ++){
        if(number % var == 0) return 0;
    }
    return number > 1;
}
int reversible(int number){
    int temporary = number;
    int reverse = 0;
    while (number > 0){
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    return reverse == temporary;
}
int main(){
    int test; scanf("%d", &test);
    while(test --){
        int a, b, cnt = 0;
        scanf("%d%d", &a, &b);
        for(int var = a; var <= b; var ++){
            if(reversible(var) && prime(var)){
                cnt ++;
                printf("%d ", var);
                if(cnt % 10 == 0) printf("\n");
            }
        }
        printf("\n");
    }
}
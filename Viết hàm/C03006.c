#include<stdio.h>
#include<math.h>
int main(){
    int t; scanf("%d", &t);
    for(int k = 1; k <= t; k++){
        int n; scanf("%d", &n);
        printf("Test %d: ", k);
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                int cnt = 0;
                while (n % i == 0){
                    n /= i;
                    cnt ++;
                }
                printf("%d(%d) ", i, cnt);
                if(n == 1) printf("\n");    
            }
        }
        if(n > 1) printf("%d(1)\n", n);
    }
    t --;
}
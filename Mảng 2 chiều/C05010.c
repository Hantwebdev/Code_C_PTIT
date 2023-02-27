#include<stdio.h>
#include<math.h>
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % 2 == 0) return 0;
    }
    return n > 1;
}
int main(){
    int n; scanf("%d", &n);
    int a[n][n], sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(prime(a[i][j])) sum += a[i][j];
        }
    }
    printf("%d", sum);
}
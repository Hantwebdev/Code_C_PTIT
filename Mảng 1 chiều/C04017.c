#include<stdio.h>
#include<math.h>
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int n; scanf("%d", &n);
    int a[n], cnt = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(prime(a[i])) ++cnt;
        else a[i] = 0;
    }
    printf("%d ", cnt);
    for(int i = 0; i < n; i++){
        if(a[i] != 0) printf("%d ", a[i]);
    }
}

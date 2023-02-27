#include <stdio.h>
int check(int n){
    int a = n, res = 0, check = 1;
    while (a > 0){
        if (a % 10 == 9)
            check = 0;
        res = res * 10 + a % 10;
        a /= 10;
    }
    return check == 1 && res == n;
}

int main(){
    int n; scanf("%d", &n);
    int dem = 0;
    for (int i = 2; i < n; i++){
        if (check(i)){
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n%d", dem);
}
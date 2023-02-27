#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for (int i = n-1; i>= 0; i--){
        int init = i;
        for(int j = 1; j <= i + 1; j++){
            printf("%c", 64 + init);
            ++init;
        }
        printf("\n");
    }
}
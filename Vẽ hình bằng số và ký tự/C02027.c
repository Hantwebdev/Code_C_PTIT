#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int init;
        if(i % 2 == 0) init = i*(i+1)/2;
        else init = i*(i+1)/2-i+1;
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0) printf("%c ", 96 + init--);
            else printf("%c ", 96 + init++);
        }
        printf("\n");
    }
}
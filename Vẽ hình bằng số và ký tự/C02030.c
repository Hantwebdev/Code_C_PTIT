#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int init = 1;
        for(int j = 1; j <= 2*i-1; j++){
            if(j < i) printf("%c", init + 63), init += 2;
            else printf("%c", init + 63), init -= 2;
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <string.h>
int list(char c[]){
    int list[strlen(c)];
    for(int i = 0; i < strlen(c); i++){
        list[i] = 1;
        for(int j = 0; j < i; j++){
            if(c[i] > c[j] && list[i] < list[j] + 1){
                list[i] = list[j] + 1;
            }
        }
    }
    int res = 0;
    for(int i = 0; i < strlen(c); i++){
        if(list[i] > res){
            res = list[i];
        }
    }
    return 26 - res;
}
int main(){
    char c[101]; scanf("%s", &c);
    printf("%d", list(c));
}
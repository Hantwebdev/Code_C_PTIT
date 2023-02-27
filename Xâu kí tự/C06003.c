#include<stdio.h>
#include<string.h>
int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        char c[201];
        gets(c);
        int cnt = 0;
        char *token = strtok(c, " ");
        while(token != NULL){
            ++cnt;
            token = strtok(NULL, " ");
        }
        printf("%d\n", cnt);
    }
}
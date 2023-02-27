#include<stdio.h>
#include<string.h>
int main(){
    char s[101]; gets(s);
    char a[101][101]; int n = 0;
    char *token = strtok(s, " ");
    while(token != NULL){
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(a[i], a[j]) == 0){
                a[j][0] = 0;
            }
        }
        if(a[i][0] != 0) printf("%s ", a[i]);
    }
}
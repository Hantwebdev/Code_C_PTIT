#include<stdio.h>
#include<string.h>
int main(){
    char s1[101]; gets(s1);
    char s2[101]; scanf("%s", &s2);
    char a[101][101]; int n = 0;
    char *token = strtok(s1, " ");
    while(token != NULL){
        if(strcmp(token, s2) != 0){
            strcpy(a[n++], token);
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n; i++){
        printf("%s", a[i]);
        if(i != n - 1) printf(" ");
    }
}
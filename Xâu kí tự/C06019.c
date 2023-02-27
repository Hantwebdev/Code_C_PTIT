#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char* strlwr(char s[]){
    for(int i = 0; i < strlen(s); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}
int main(){
    char s[101]; gets(s);
    strlwr(s);
    char a[50][20]; int n = 0;
    char *token = strtok(s, " ");
    while(token != NULL){
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n - 1; i++){
        printf("%c", a[i][0]);
    }
    printf("%s@ptit.edu.vn", a[n-1]);
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanhoa(char s[]){
    s[0] = toupper(s[0]);
    for(int i = 1; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        char s[100]; gets(s);
        char a[20][50]; int n = 0;
        char *token = strtok(s, " ");
        while(token != NULL){
            strcpy(a[n++], token);
            token = strtok(NULL, " ");
        }
        for(int i = 0; i < n; i++){
            chuanhoa(a[i]);
            printf("%s", a[i]);
            if(i != n - 1) printf(" ");
        }
        printf("\n");
    }
}
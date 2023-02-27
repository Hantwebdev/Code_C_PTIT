#include<stdio.h>
#include<string.h>
#include<ctype.h>
char* strlwr(char s[]){
    for(int i = 0; i < strlen(s) - 1; i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}
int main(){
    char s[501]; gets(s);
    strlwr(s);
    char a[50][20]; int n = 0;
    char *token = strtok(s, " ");
    while(token != NULL){
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    int mark[501] = {0};
    for(int i = 0; i < n; i++){
        if(mark[i] == 0){
            int cnt = 1;
            for(int j = i + 1; j < n; j++){
                if(strcmp(a[i], a[j]) == 0){
                    ++cnt;
                    mark[j] = 1;
                }
            }
            printf("%s %d\n", a[i], cnt);
        }
    }
}
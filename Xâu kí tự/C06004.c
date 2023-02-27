#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char c[1005];
    gets(c);
    int al = 0, di = 0;
    for(int i = 0; i < strlen(c); i++){
        if(isalpha(c[i])) ++al;
        else if(isdigit(c[i])) ++di;
    }
    printf("%d %d %d", al, di, strlen(c) - al - di);
}
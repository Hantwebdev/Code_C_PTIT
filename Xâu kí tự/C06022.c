#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int min(int a, int b){
    return a < b ? a : b;
}
int cmp1(char a[], char b[]){
    int n1 = strlen(a), n2 = strlen(b);
    if(n1 != n2) return 0;
    for(int i = 0; i < min(n1, n2); i++){
        if(tolower(a[i]) != tolower(b[i])) return 0;
    }
    return 1;
}
int main(){
    int T; scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        getchar();
        char s1[101]; gets(s1);
        char s2[101]; scanf("%s", &s2);
        char a[20][50]; int n = 0;
        char* token = strtok(s1, " ");
        printf("Test %d: ", t);
        while(token != NULL){
            if(!cmp1(token, s2)) printf("%s ", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
}
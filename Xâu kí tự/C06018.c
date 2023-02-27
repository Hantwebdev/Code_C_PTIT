#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    char *x = (char*) a;
    char *y = (char*) b;
    return strcmp(x, y);
}
int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        char s1[101], s2[101], a[20][50], b[20][50]; int n = 0, m = 0;
        gets(s1); gets(s2);
        char *token = strtok(s1, " ");
        while(token != NULL){
            strcpy(a[n++], token);
            token = strtok(NULL, " ");
        }
        char *token1 = strtok(s2, " ");
        while(token1 != NULL){
            strcpy(b[m++], token1);
            token1 = strtok(NULL, " ");
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for(int i = 0; i < n; i++){
            while(strcmp(a[i], a[i+1]) == 0) ++i;
            int ok = 0;
            for(int j = 0; j < m; j++){
                if(strcmp(a[i], b[j]) == 0){
                    ok = 1; 
                    break;
                }
            }
            if(!ok) printf("%s ", a[i]);
        }
        printf("\n");
    }
}
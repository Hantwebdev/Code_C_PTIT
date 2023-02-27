#include <stdio.h>
#include <string.h>
int main(){
    char s[15]; scanf("%s", s);
    int cnt[10] = {0};
    for (int i = 0; i < strlen(s); i++){
        int var = s[i] - '0';
        if (var == 2 || var == 3 || var == 5 || var == 7)
            cnt[var]++;
    }
    for (int i = 0; i < strlen(s); i++){
        int var = s[i] - '0';
        if (cnt[var] > 0){
            printf("%d %d\n", var, cnt[var]);
            cnt[var] = 0;
        }
    }
}
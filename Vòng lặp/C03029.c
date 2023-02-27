#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool check(char s[]){
    for (int i = 0; i < strlen(s); i++){
        int temporary = s[i] - '0';
        if (temporary % 2 != 0)
            return 0;
    }
    return 1;
}

int main(){
    int test; scanf("%d\n", &test);
    while (test--){
        char s[20]; scanf("%s", &s);
        check(s) ? printf("YES\n") : printf("NO\n");
    }
}
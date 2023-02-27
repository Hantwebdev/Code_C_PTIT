#include <stdio.h>
#include <string.h>
int check(char s[]){
    int l = strlen(s);
    if (2 * (s[0] - '0') != (s[l - 1] - '0') && (s[0] - '0') != 2 * (s[l - 1] - '0'))
        return 0;
    for (int i = 1; i < l / 2; i++)
        if (s[i] != s[l - 1 - i])
            return 0;
    return 1;
}
int main(){
    int t; scanf("%d", &t);
    while (t--){
        char s[20]; scanf("%s", s);
        check(s) ? printf("YES\n") : printf("NO\n");
    }
}
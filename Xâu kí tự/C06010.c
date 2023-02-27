#include<stdio.h>
#include<string.h>
int check(char a[]){
    for(int i = 0; i <= (strlen(a) -1) / 2; i++){
        if((a[i] != a[strlen(a) - i - 1]) || (a[i] - '0') % 2 != 0) return 0;
    }
    return 1;
}
int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        char a[501]; 
        scanf("%s", &a);
        check(a) ? printf("YES\n") : printf("NO\n");
    }
}
#include <stdio.h>
#include <string.h>
#include <math.h>
int check(char a[]){
    int l = strlen(a);
    for(int i = 0; i <= (l-1)/2; i++){
        if(a[i] != a[l - i - 1] || a[i] == '0' || a[i] == '1' || a[i] == '4' || a[i] == '6' || a[i] == '8' || a[i] == '9') return 0; 
    }
    return 1;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        char a[501]; scanf("%s", &a);
        check(a) ? printf("YES\n") : printf("NO\n");
    }
}
#include<stdio.h>
#include<string.h>
void solve(char c[]){
    int ok = 0;
    for(int var = 0; var < strlen(c); var ++){
        if(c[var] == '1') ok = 1;
        else if(!(c[var] == '0' || c[var] == '8'|| c[var] == '9')){
            ok = 0;
            break;
        }
    }
    if(!ok){
        printf("INVALID\n"); 
        return;
    }
    ok = 0;
    for(int var = 0; var < strlen(c); var ++){
        if(c[var] == '1'){
            printf("1"); 
            ok = 1;
        }
        else if(ok != 0) printf("0");
    }
    printf("\n");
}
int main(){
    int test; scanf("%d", &test);
    while (test--){
        char c[20]; scanf("%s", c);
        solve(c);
    }
}
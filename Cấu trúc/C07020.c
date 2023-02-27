#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
typedef struct Pokemon{
    char species[101];
    int  need, have, times;
} PKM;
int main(){
    int n; scanf("%d", &n);
    PKM a[n];
    int sum = 0, max = -1e9;
    int pos = -1e9;
    for(int i = 0; i < n; i++){
        getchar();
        scanf("%s%d%d", &a[i].species, &a[i].need, &a[i].have);
        a[i].times = 0;
        while(a[i].need <= a[i].have){
            a[i].times += a[i].have / a[i].need;
            a[i].have = a[i].have % a[i].need + 2 * (a[i].have / a[i].need);
        }
        sum += a[i].times;
        if(max < a[i].times){
            max = a[i].times;
            pos = i;
        }
    }
    printf("%d\n%s", sum, a[pos].species);
}

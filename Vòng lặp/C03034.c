#include <stdio.h>
#include <math.h>
void solve(){
    int number; scanf("%d", &number);
    int cnt = 0;
    for (int var = 1; var <= sqrt(number); var ++)
        if (number % var == 0){
            if (var % 2 == 0)
                cnt ++;
            if ((number / var) % 2 == 0)
                cnt ++;
            if (var % 2 == 0 && var * var == number)
                cnt --;
        }
    printf("%d\n", cnt);
}

int main(){
    int test; scanf("%d", &test);
    while (test--)
        solve();
}
#include <stdio.h>
#include <math.h>
int prime(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int check(int n){
    int sum = 0;
    while (n > 0){
        int r = n % 10;
        sum += r;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return 0;
        n /= 10;
    }
    return prime(sum);
}
int main(){
    int t; scanf("%d", &t);
    while (t--){
        int l, r; scanf("%d %d", &l, &r);
        int cnt = 0;
        for (int i = l; i <= r; i++)
            if (prime(i) && check(i))
                    cnt++;
        printf("%d\n", cnt);
    }
}
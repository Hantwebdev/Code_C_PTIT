#include <stdio.h>
typedef long long ll;
ll GCD(ll a, ll b){
    while (b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int t; scanf("%d", &t);
    while (t--){
        int n, m; scanf("%d %d", &n, &m);
        ll res = 1;
        for (int i = n; i <= m; i++){
            ll uoc = GCD(res, i);
            res = res * i / uoc;
        }
        printf("%lld\n", res);
    }
}
#include<stdio.h>
int main(){
    int n, m; scanf("%d%d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int j = 0; j < m; j++) scanf("%d", &b[j]);
    int k; scanf("%d", &k);
    for(int i = 0; i < n + m; i++){
        if(i < k) printf("%d ", a[i]);
        else if(i >= k && i < k + m) printf("%d ", b[i - k]);
        else printf("%d ", a[i - m]);
    }
}
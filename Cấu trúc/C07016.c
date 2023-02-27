#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct ThiSinh TS;
struct ThiSinh{
    int id;
    char ten[101];
    char ngaysinh[101];
    double d1, d2, d3, sum;
};
int cmp(const void *a, const void *b){
    TS *x = (TS *)a;
    TS *y = (TS *)b;
    if(x -> sum < y -> sum) return 1;
    return -1;
}
int main(){
    int n; scanf("%d", &n);
    TS a[n];
    for(int i = 0; i < n; i++){
        getchar();
        a[i].id = i + 1;
        gets(a[i].ten);
        gets(a[i].ngaysinh);
        scanf("%lf%lf%lf", &a[i].d1, &a[i].d2, &a[i].d3);
        a[i].sum = a[i].d1 + a[i].d2 + a[i].d3;
    }
    qsort(a, n, sizeof(TS), cmp);
    for(int i = 0; i < n; i++){
        printf("%d %s %s %.1lf\n", a[i].id, a[i].ten, a[i].ngaysinh, a[i].sum);
    }
}

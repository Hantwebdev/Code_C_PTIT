#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Item It;
struct Item{
    int id;
    char name[501];
    char group[501];
    double buyPrice;
    double sellPrice;
    double profit;
};
int cmp(const void *a, const void *b){
    It *x = (It*) a;
    It *y = (It*) b;
    if(x -> profit < y -> profit) return 1;
    else return -1;
}
int main(){
    int n; scanf("%d", &n);
    It a[n];
    for(int i = 0; i < n; i++){
        getchar();
        a[i].id = i + 1;
        gets(a[i].name);
        gets(a[i].group);
        scanf("%lf%lf", &a[i].buyPrice, &a[i].sellPrice);
        a[i].profit = a[i].sellPrice - a[i].buyPrice;
    }
    qsort(a, n, sizeof(It), cmp);
    for(int i = 0; i < n; i++){
        printf("%d %s %s %.2lf\n", a[i].id, a[i].name, a[i].group, a[i].profit);
    }
}




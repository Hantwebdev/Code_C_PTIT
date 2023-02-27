#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct ThuKhoa TK;
struct ThuKhoa{
    int id;
    char ten[101];
    char ngaysinh[101];
    double d1, d2, d3, sum;
};
int main(){
    int n; scanf("%d", &n);
    TK a[n];
    double max = 0;
    for(int i = 0; i < n; i++){
        getchar();
        a[i].id = i + 1;
        gets(a[i].ten);
        gets(a[i].ngaysinh);
        scanf("%lf%lf%lf", &a[i].d1, &a[i].d2, &a[i].d3);
        a[i].sum = a[i].d1 + a[i].d2 + a[i].d3;
        if(max < a[i].sum) max = a[i].sum;
    }
    for(int i = 0; i < n; i++){
        if(a[i].sum == max){
            printf("%d %s %s %.1lf\n", a[i].id, a[i].ten, a[i].ngaysinh, a[i].sum);
        }
    }
}

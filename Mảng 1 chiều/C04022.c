#include<stdio.h>
int main(){
    int n; scanf("%d", &n);
    int a[n], max1 = -1e9, max2 = -1e9;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] > max1) max1 = a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] != max1 && a[i] > max2) max2 = a[i];
    }
    printf("%d %d", max1, max2);
}
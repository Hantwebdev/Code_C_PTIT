#include <stdio.h>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int n; scanf("%d", &n);
    int a[n];
    int chan[101], even = 0;
    int le[101], odd = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            chan[even++] = a[i];
        else
            le[odd++] = a[i];
    }
    for (int i = 0; i < even; i++){
        for (int j = i + 1; j < even; j++)
            if (chan[j] < chan[i])
                swap(&chan[i], &chan[j]);
        printf("%d ", chan[i]);
    }
    for (int i = 0; i < odd; i++){
        for (int j = i + 1; j < odd; j++)
            if (le[j] < le[i])
                swap(&le[i], &le[j]);
        printf("%d ", le[i]);
    }
}
int main(){
    int n; scanf("%d", &n);
    int a[n];    
    int even[101], cnt_even = 0;
    int odd[101], cnt_odd = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            even[cnt_even ++] = a[i];
        }
        else odd[cnt_odd ++] = a[i];
    }
    for(int i = 0; i < cnt_even; i++) printf("%d ", even[i]);
    printf("\n");
    for(int i = 0; i < cnt_odd; i++) printf("%d ", odd[i]);
    printf("\n");
}


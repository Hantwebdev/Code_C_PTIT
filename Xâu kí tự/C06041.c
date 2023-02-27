#include<stdio.h>
#include<string.h>
int main(){
    char c[100001]; scanf("%s", c);
    int pos = 0, n = strlen(c);
    while(pos < n){
        // tìm được kí tự có kí tự từ điển lớn nhất tính từ pos => n - 1
        char tmp = c[pos];
        int last_pos = pos;
        for(int i = pos; i < n; i++){
            if(c[i] > tmp){
                tmp = c[i];
            }
        }
        for(int i = pos; i < n; i++){
            if(c[i] == tmp){
                printf("%c", c[i]);
                last_pos = i; // đánh dấu vị trí cuối cùng của kí tự lớn nhất hiện tại
            }
        }
        pos = last_pos + 1;
    }
}
#include <stdio.h>
int main(){
	int day;
	scanf("%d",&day);
	printf("%d %d %d", day / 365, (day % 365) / 7, (day % 365) % 7);
	}
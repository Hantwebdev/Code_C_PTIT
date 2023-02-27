#include<stdio.h>
int main(){
	int temperature;
	scanf("%d", &temperature);
	printf("%.2lf", ((float) temperature * 9/5) + 32);
	}

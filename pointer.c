#include<stdio.h>

void main(){
	int a,b;
	a=15;
    int *p=&a;
    b=11;
    int *c=&b;
    printf("%d\n",&b);
	printf("%d",p);
}



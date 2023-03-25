#include<stdio.h>
int main(){
	int a=5;
	int *ptr=&a;
	int **ptr1=&ptr;
	printf("%d %d %d",a,*ptr,**ptr1);
	return 0;
}

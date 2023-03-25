#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=5;
	int *ptr=(int*)malloc(2*sizeof(int));
	ptr=a;
	printf("%d",*ptr);
	return 0;
	
}

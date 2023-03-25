#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int	*ptr=(int*)malloc(5*sizeof(*ptr));
	for(int i=0;i<5;i++){
	   scanf("%d",ptr+i);
	}
	for(int i=0;i<5;i++){
	   printf("%d\n",*(ptr+i));
	}
	free(ptr);
	printf("%d",*ptr);
}

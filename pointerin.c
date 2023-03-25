#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr =(int*)malloc(2*sizeof(ptr));
int a=5;
int b=6;
if(ptr==NULL)
{
	printf("the memory is not allocated");
}
else{

*ptr=a;
*(ptr+1)=b;
*(ptr+20)=4;
printf("%d %d %d",*ptr,(ptr+1),(ptr+20));
return 0;
}
}

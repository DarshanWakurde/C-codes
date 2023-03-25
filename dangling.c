#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr=(int *)malloc(5*sizeof(int));
free(ptr);
printf("%d",ptr);
fflush(stdout);
return 0;
}

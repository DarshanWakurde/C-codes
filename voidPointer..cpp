#include<stdio.h>
int main(){
	int n=10;
	void *ptr=&n;//this is void pointer as it did not have any datatype specified so it can typecast to any datatype
	
	printf("%d",*(int *)ptr);
	return 0;
}

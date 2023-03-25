#include<stdio.h>


void val(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=5;
	int b=10;
	int *ptra=&a;
	int *ptrb=&b;
	val(ptra,ptrb);
	printf("%d  %d",a,b);
return 0;
}

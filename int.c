#include<stdio.h>
int dec(int n){
	if(n==0)
	{
		return;
	}
printf("%d\n",n);
 dec(n-1);
}
int inc(int n){
	if(n==1){
		printf("%d\n",1);
		return;
	}
	inc(n-1);
	printf("%d\n",n);
	
}

void main(){
	int n=5;
	dec(n);
	inc(n);
}

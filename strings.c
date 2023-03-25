#include<stdio.h>

int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
return a+sum(a-1);
}
int main(){
printf("%d",sum(4));
return 0;
}

#include<stdio.h>

int main()
{	
int a[]={1,5,6,7};
int i;
int pos=1;
for( i=0;i<5;i++){
	printf("%d\n",a[i]);
}

for(i=4;i>=pos;i--){
	a[i]=a[i-1];
	
	if(a[i]==pos){
		a[i]=4;
	}
}
for(i=0;i<5;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}

#include<stdio.h>
void main(){
	int arr[10];
	int i,j,k;
	int min=0;
	int count=0;
	k=0;
	j=10;
for(i=0;i<=10;i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
	printf("%d\n",arr[i]);
}
printf("Enter the number u want to search");
int a;
scanf("%d",&a);
for(i=0;i<10;i++){
	if(arr[i]==a){
		printf("%d\n",i);	
		if(j>i)
		{
			j=i;
		}
		if(k<i)
		{
			k=i;
		}
		}
	}

printf("%d %d",j,k);
	
		}
	



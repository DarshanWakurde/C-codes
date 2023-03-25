#include<stdio.h>
void main(){
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n];
	int i,j,k;
	int min=0;
	int count=0;
	k=0;
	j=n;
	printf("enter the elements of array");
for(i=0;i<=n;i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
	printf("%d\n",arr[i]);
}
printf("Enter the number u want to search");
int a;
scanf("%d",&a);
for(i=0;i<n;i++){
	if(arr[i]==a){
		printf("%d\n",i);
		count++;
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

printf("%d %d\ncount= %d",j,k,count);
printf("enter the above index to conform");
int in1,in2;
scanf("\n%d \n%d",&in1,&in2);
printf("arr[%d]=%d\n",in1,arr[in1]);
printf("arr[%d]=%d\n",in2,arr[in2]);
	
		}
	



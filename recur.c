#include<stdio.h>

int min(int arr[],int n)
{
	if(n==0)
	{
		return 0;
	}

	scanf("%d",&n);

	printf("\n%d\n",n);
		min(arr,n-1);
    
}

int main(){
	
	int n;
	scanf("%d",&n);
	int arr[n];
	min(arr,n);
	return 0;
}

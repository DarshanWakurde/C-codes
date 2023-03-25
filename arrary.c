#include<stdio.h>

void main(){
	int i,j,n;
	int count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			int n=i;
			if(arr[i]==arr[j]){
			i=j;
			arr[i]=0;	
		}
		i=n;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]==0){
			count++;
		}
	}
	printf("\n[");
		for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}
	printf("]");
		printf("\n");
	
			for(i=0;i<n;i++){
		if(arr[i]==0){	
		arr[i]=arr[i+1];
		}
		printf("%d\n",arr[i]);
	}
	printf("count =%d\n",count);
	n=n-count;
		for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=-1;j<=i;j++){
			printf("{%d}",arr[j]);
		}
		printf("\n");	
	}
}

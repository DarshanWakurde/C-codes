#include<stdio.h>
int main(){
	int arr[4][4];
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
			for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(arr[i][j+1]>arr[i][j]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
				j=j-1;
			}
		
		}
		printf("\n");
	}
	
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}

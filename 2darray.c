#include<stdio.h>
int main(){
	int i,j,k;
	int n,m;
	int sum=0;
	int num=0;
	scanf("%d",&n);
	scanf("%d",&m);
	int arr[n][m];
	int arr2[m][n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr2[i][j]);
		}

	}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			for(k=0;k<n;k++){
			
	    	int num=arr2[i][k]*arr[k][j];
			sum=sum+num;
	}
		printf("%d ",sum);
	sum=0;
}
	printf("\n");
		}
	
	}



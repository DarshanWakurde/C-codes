#include<stdio.h>

int main(){
	  int i,j;
	  int arr[3][3];
	  for(i=0;i<3;i++){
	  	for(j=0;j<3;j++){
	  		scanf("%d",&arr[i][j]);
		  }
	  }
	  
	    for(i=0;i<3;i++){
	  	for(j=0;j<3;j++){
	  		printf("%d ",arr[i][j]);
		  }
		  printf("\n");
	  }
	  printf("\nTranspose of matrix ->\n");
	  j=0;
	  while(j<3){
	  	for(i=0;i<3;i++){
	  		printf("%d ",arr[i][j]);
		  }
		  printf("\n");
		  j++;
	  }
}

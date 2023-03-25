#include<stdio.h>

void main(){
	char arr[3][3];
	int i,j;
	char al='a';
	char a,b;
	int p1=0;
	int p2=0;
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		arr[i][j]=al;
		al++;
	}
}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("|  %c  |",arr[i][j]);
		}
		printf("\n----------------------\n");
	}
	
	while(p1<6&&p2<5){
	printf("Enter the alphabet where u want to place your X\n");
		scanf("%c",&a);
			printf("Enter the alphabet where u want to place your O\n");
		scanf("%c",&b);
			for(i=0;i<3;i++){
		for(j=0;j<3;j++){
             if(arr[i][j]==a){
             	arr[i][j]='X';
			 }
			 
		}
	}
			for(i=0;i<3;i++){
		for(j=0;j<3;j++){
             if(arr[i][j]==b){
             	arr[i][j]='O';
			 }
			 
		}
		  
	}
	p1++;
	p2++;
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("|  %c  |",arr[i][j]);
		}
		printf("\n----------------------\n");
	}
}
}

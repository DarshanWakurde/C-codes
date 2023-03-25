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
			for(i=0;i<3;i++){
		for(j=0;j<3;j++){
             if(arr[i][j]==a){
             	arr[i][j]='X';
			 }
			 
		}
			printf("Enter the alphabet where u want to place your O\n");
		scanf("%c",&b);
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
	
	//---------------------------------------------------------
	if(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O'||arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O'||arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O'||arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O'||arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O'||arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O')
	{
		printf("O wins");
	}
	else if(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X'||arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X'||arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X'||arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X'||arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X'||arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X'){
			printf("X wins");
	}



}
}
}


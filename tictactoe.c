
#include<stdio.h>

int main(){
	char arr[3][3];
	int i,j;
	char al='a';
	char a;
	char b;
	int p1=0;
	int p2=0;
	int count=1;
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

while(p1<6&&p2<5)
{
		if(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O'||arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O'||arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O'||arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O'||arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O'||arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O'||arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'||arr[2][0]=='O'&&arr[1][1]=='O'&&arr[0][2]=='O')
	{
		printf("O wins");
		p1=10;
		goto jump;
	}
	printf("Enter the alp to place your X\n");
	scanf("\n%c",&a);
	if(a>'i'){
		printf("sorry wrong input\n");
			scanf("\n%c",&a);		
	}
	p1++;
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]==a){
				arr[i][j]='X';
			
		}
		printf("|  %c  |",arr[i][j]);
	}
	printf("\n----------------------\n");
}

if(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X'||arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X'||arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X'||arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X'||arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X'||arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X'||arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'||arr[2][0]=='X'&&arr[1][1]=='X'&&arr[0][2]=='X'){
			printf("X wins");
			p2=10;
			goto jump;
	}
	

printf("\n");
printf("Enter the alp to place your O\n");
		scanf("\n%c",&b);
			if(b>'i'){
		printf("sorry wrong input\n");
			scanf("\n%c",&b);
			
	}
	p2++;
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]==b){
				arr[i][j]='O';
			}
			printf("|  %c  |",arr[i][j]);
		}
		printf("\n----------------------\n");
	}
	printf("\n");
	count++;
	if(count>5){
		printf("Draw Match");
		goto jump;
	}

}
jump:
	return 0;
}

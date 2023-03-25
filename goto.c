#include<stdio.h>

int main(){
	int a,i;
		scanf("%d",&a);
	
	for(i=0;i<10;i++){
	printf("%d",i);
	if(i==a){
		goto jump;
	}
}

	jump:
		printf("hello  world");
		

	return 0;
}

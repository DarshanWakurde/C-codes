#include<stdio.h>

int recu(int a){
	if(a==0){
		return 1;
	}
	int num=a*recu(a-1);
	return num;
}

int main(){
	printf("%d",recu(5));
}

#include<stdio.h>

int com(int arr[],int n){
	if(n==5){
		return;
	}
	printf("%d\n",arr[n]);
	com(arr,n+1);
}

int main(){
	int n=0;
   int arr[]={1,5,4,7,8};
   com(arr,n);
}

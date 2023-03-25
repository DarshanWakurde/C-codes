#include<stdio.h>
int get(int n){
	int i;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	return arr[n];
}
void put(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
int main(){
		int n;
		scanf("%d",n);
			int arr[n];
		get(n);

	arr[n]=get(n);
	put(arr,n);
}

#include <stdio.h>

int lop(int arr[]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr[5];
}

void main(){
int i;
int arr[5]={1,55,4,88,6};
lop(arr);
for(i=0;i<5;i++){
	printf("%d\n",arr[i]);
}

}

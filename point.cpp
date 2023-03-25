#include<stdio.h>
#include<stdlib.h>
int main(){
 int a[8]={1,5,7,9,5,4,88,6};
 int i,j;
 int temp;
 for(i=0;i<7;i++)
 {
 	for(j=i+1;j<8;j++)
 	{
 		if(a[i]>a[j])
 		{
 			temp=a[i];
 			a[i]=a[j];
 			a[j]=temp;	
		 }
	 }
 }
for(i=0;i<8;i++)
{
	printf("%d ",a[i]);
}
 
}

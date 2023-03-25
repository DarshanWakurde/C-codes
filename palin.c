#include<stdio.h>
#include<string.h>
void main(){
	char a[10];
	char b[10];
	int i,j;
	scanf("%s",&a);
	for(i=strlen(a)-1;i>=0;i--){
		printf("%c",a[i]);
		for(j=i;j<i;j++){
		
		b[i]=a[i];
		printf("%c",b[i]);	
		
	}
	}
      if(b[10]==a[10]){
      	printf("the word is palindrome");
	  }
	  else{
	  	printf("No");
	  }
}

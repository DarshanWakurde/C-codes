#include<stdio.h>
#include<string.h>
char rep(char str[],int len){
	 float pi=3.14;
	if(len<0)
	{
		return;
	}
	rep(str,len-1);
	if(str[len]=='i'&&str[len-1]=='p'){
		printf("%.2f",pi);
		len=len-2;
	}
	printf("%c",str[len-1]);	
}

int main(){
char sen[10];
int i,j;
float pi=3.14;
int count=0;
scanf("%s",&sen);
printf("%s\n",sen);
rep(sen,strlen(sen));
}

/*for(i=0;i<strlen(sen);i++){
	if(sen[i]=='p'&&sen[i+1]=='i'){
		printf("%.2f",pi);
		i=i+2;
	}
	
		printf("%c",sen[i]);
		
	}*/



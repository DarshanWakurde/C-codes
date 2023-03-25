#include<stdio.h>
#include<string.h>

char rev(char str[],int len)
{
	if(len<0){
		return;
	}
	
	printf("%c",str[len]);
	rev(str,len-1);
}

int main(){
	char name[5];
	int i;
	
	scanf("%s",&name);
	printf("%s\n",name);
	rev(name,strlen(name));

}

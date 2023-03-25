#include<stdio.h>
void main()
{
	struct car1{
		int mod;
		char name[25];
		char colour[10];
	};
	
	struct car1 c1;
	printf("model no");
	scanf("%d",&c1.mod);
	printf("name");
	scanf("%s",&c1.name);
	printf("colour");
	scanf("%s",&c1.colour);
	printf("%d\n",c1.mod);
	printf("%s\n",c1.name);
	printf("%s\n",c1.colour);
}

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<8;i++)
	{
		for(j=1;j<8;j++)
		{ 
		    if(i==4&&j==4)
		    {	
			printf("1");
		    }
			else if(i>2&&j>2&&i<6&&j<6)
			{
			printf("2");
			}
			else if(i>1&&j>1&&i<7&&j<7)
			{
			printf("3");
			}
			else
			{
				printf("4");
			}
		}
		printf("\n");
	}
}

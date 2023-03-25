#include<stdio.h>
void main()
{
	int i,j;
		for(i=0;i<6;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==1&&j==5||i==2&&j>3&&j<7||i==3&&j>2&&j<8||i==4&&j>1&&j<9||i==5&&j>0&&j<10)
			{
				printf(" ");
			}
		    else
		    {
		    	printf("*");
			}
		}
		if(i<=6){
	
		printf("\n");
			}
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==1&&j>0&&j<10||i==2&&j>1&&j<9||i==3&&j>2&&j<8||i==4&&j>3&&j<7||i==5&&j==5)
			{
				printf(" ");
			}
		    else
		    {
		    	printf("*");
			}
		}
		printf("\n");
	}
}

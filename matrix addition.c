#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r,c,i,j;
	printf("enter matrix rows & column size");
	scanf("%d%d",&r,&c);
	printf("enter A matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c=[i][j]=A[i][j]+B[i][j]
		}
	}
	printf("Result matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,tn,ts;
	printf("enter table number");
	scanf("%d",&tn);
	printf("enter table size");
	scanf("%d",&ts);
	for(i=1;i<=tn;i++)
    {
     printf("%d*%d=%d/n",i,tn,i*tn);
	 }
	 return 0;
	}


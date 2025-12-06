#include<stdio.h>
int main()
{
	int n,d,rev=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n>0)
    {
        d=n%10;
    	rev=rev*10+d;
    	n=n/10;
	}
    if(temp==rev)
    printf("it is palindrome");
    else
    printf("not a palinrome");
    return 0;
	}


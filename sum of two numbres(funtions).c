#include<stdio.h>
void mult(int,int);
int main ()
{
    int x=13,y=2;
    mult(x,y);
    return 0;
}
void mult(int x,int y)
{
    int z;
    z=x*y;
    printf("mult=%d",z);
}

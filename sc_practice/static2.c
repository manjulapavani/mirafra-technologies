#include<stdio.h>
static int a=0,b=0;
static int sum(int,int);
int main()
{
printf("enter the values:");
scanf("%d%d",&a,&b);
sum(a,b);
}
int sum(int a,int b)
{
int z;
z=a+b;
printf("%d\n",z);
}

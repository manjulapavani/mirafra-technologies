#include<stdio.h>
static int a=0,b=0;
void sum();
int main()
{
printf("enter the values:\n");
scanf("%d%d",&a,&b);
sum();
}
void sum()
{
int z;
z=a+b;
printf("%d",z);
}

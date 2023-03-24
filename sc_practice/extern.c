/*#include<stdio.h>
int main()
{
extern int a,b;
	int add;
//	printf("enter the values");
//	scanf("%d%d",&a,&b);
	add=addition();
	printf("%d",add);
	add=a-b;
}
int a=3,b=5;
int addition()
{
return a+b;
}*/

/*#include<stdio.h>
int main()
{
	extern int a,b;
	int sub;
	printf("enter the values:");
	scanf("%d%d",&a,&b);
	sub=subtraction();
	printf("%d",sub);
	sub=a-b;
}
int a,b;
int subtraction()
//int a,b;
{
	return a-b;
}*/

#include<stdio.h>
int main()
{
	extern int x,y;
	int mul;
	printf("enter the values:");
	scanf("%d%d",&x,&y);
	mul=multiplication();
	printf("%d",mul);
}
int x,y;
int multiplication()
{
	return x*y;
}


#include<stdio.h>
int main()
{
	int x=1;
	int *const ptr=&x;
	//ptr=&x; here the address cannot be modified only value can change
	*ptr=10;
	printf("%d\n",x);
}

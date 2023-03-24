#include<stdio.h>
int main()
{
	int x=3,y=8;
	int const *ptr;
	ptr=&x;
	//*ptr=10;      //we cannot change the value here but we can change the address
	printf("%d\n",x);
	ptr=&y;
	printf("%d\n",y);
}

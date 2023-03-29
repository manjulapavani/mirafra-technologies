#include<stdio.h>
#include<string.h>
int strlen1(char str[]);
int main()
{
	int l;
	char str[10]={"kernel"};
	l=strlen1(str);
	printf("the length of given string is =%d",l);
}
int strlen1(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}



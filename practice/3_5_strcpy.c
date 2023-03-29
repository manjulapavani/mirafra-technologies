#include<stdio.h>
#include<string.h>
int mystrlen(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		;
	}
	return i;
}
void mystrcpy(char d[],char s[])
{
	int i,j;
	j=mystrlen(d);
	for(i=0;s[i]!='\0';i++,j++)
		d[j]=s[i];
	d[j]=0;
}
int main()
{
	char s[100];
	char d[50];
	printf("enter the source string:\n");
	scanf("%s",s);
	printf("enter the destination string:\n");
	scanf("%s",d);
	mystrcpy(d,s);
	printf("%s\n",d);
}

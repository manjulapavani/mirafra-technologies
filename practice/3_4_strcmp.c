#include<stdio.h>
int mystrcmp(char s1[],char s2[]);
int main()
{
	char s1[50];
	char s2[50];
	int a,i;
	printf("enter the string s1\n");
	scanf("%s",s1);
	printf("enter the string s2\n");
	scanf("%s",s2);
	a=mystrcmp(s1,s2);
	if(a==0)
		printf("%s is equal to %s\n",s1,s2);
	if (a<0)
		printf("%s is smaller than %s\n",s1,s2);
	if (a>0)
		printf("%s is bigger than %s\n",s1,s2);
	return 0;
}
int mystrcmp(char s1[],char s2[])
{
	int i;
	for (i=0;s1[i]==s2[i];i++)
	{
		if (s1[i]==0)
			return 0;
	}
	return (s1[i]-s2[i]);
}




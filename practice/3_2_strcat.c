#include<stdio.h>
#include<string.h>
void mystrcat(char s1[],char s2[]);
int main()
{
	char s1[100]="kernel";
	char s2[100]="master";
	mystrcat(s1,s2);
	printf("%s%s\n",s1,s2);
}
void mystrcat(char s1[],char s2[])
{
	int i=0,j;
	while(s2[i]==0)
	{
		for(i=0;s1[i]!=0;i++)
			for(j=0;s2[j]!=0;j++)
			{
				s1[i]=s2[j];
			}
	}
}


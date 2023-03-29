#include<stdio.h>
//#include<string.h>
void mystrncpy(char d[],char s[],int n);
int main()
{
	int n;
	char d[100]="kernel";
	char s[100]="master";
	scanf("%d",&n);
	mystrncpy(d,s,n);
	printf("%s\n",d);
}
void mystrncpy(char d[],char s[],int n)
{
	int i=0,j=0;
	for(i=0;s[i]!=0;i++)
	for(j=0; j<n;j++)
	{
		d[j]=s[i];
	}

}


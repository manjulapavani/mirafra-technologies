#include<stdio.h>
void mystrncat(char d[],char s[],int n);
int main()
{
char d[20],s[20];
int n;
printf("enter s string\n");
scanf("%s",s);
printf("enter d string\n");
scanf("%s",d);
printf("enter n value\n");
scanf("%d",&n);
mystrncat(d,s,n);
printf("destination string is:%s\n",d);
}

void mystrncat(char d[],char s[],int n)
{
int j=0;
while(d[j]!=0)
{
j++;
}
int i;
for(i=0;i<n;i++,j++)
{
d[j]=s[i];
}
d[j]=0;
}



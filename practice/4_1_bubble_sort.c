#include<stdio.h>
int main()
{
	int a[100], n, i, j, temp; 
	printf("Enter number of elements\n");
	scanf("%d", &n); 
	//printf("Enter %d Numbers:n", n); 
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]); 
	for(i = 0 ; i < n - 1; i++)//for number of passes
	{
		for(j = 0 ; j < n-i-1; j++)//for number of comparision (n-1)//unneccessary comparisions(n-1-i)
		{
			if(a[j] > a[j+1]) 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	} 
	printf("Sorted Array:\n"); 
	for(i = 0; i < n; i++)
		printf("%d\n", a[i]);
	return 0;
}

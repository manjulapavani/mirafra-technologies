//2.Swap 2 variables without 3rd variable   (x = x+y; y= x-y; x = x-y;)

/*#include<stdio.h>
  int main()
  {
  int x,y;
  printf("enter the values:");
  scanf("%d%d",&x,&y);
  printf("before swap :x=%d y=%d\n",x,y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("after swap :x=%d y=%d\n",x,y);

  }*/

//bitwise operators

/*#include<stdio.h>
  int main()
  {
  int a,b;
  printf("enter the values:");
  scanf("%d%d",&a,&b);
  printf("before swap:a=%d b=%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("after swap:a=%d b=%d\n",a,b);
  }*/


//using inline function


#include<stdio.h>
static inline void swap(int *,int *);
int main()
{
	int a,b;
	printf("enter the values:\n");
	scanf("%d%d",&a,&b);
	printf("before swap:a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("after swap:a=%d b=%d",a,b);
}
inline void swap(int *a,int *b)
{
	(*a)=(*a)+(*b);
	(*b)=(*a)-(*b);
	(*a)=(*a)-(*b);
	//printf("after swap:a=%d b=%d\n",a,b);
}

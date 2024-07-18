#include<stdio.h>
int sum ()
{
	int a,b,s;
	printf("enter any two numbers:");
	scanf("%d%d",&a,&b);
	s=a+b;
	printf("sum is %d",s);
}
int main()
{
  sum();	
	return(0);
}

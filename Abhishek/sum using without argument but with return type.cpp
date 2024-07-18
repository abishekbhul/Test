#include<stdio.h>
int sum()
{
	int a,b,s;
	printf("Enter any two numbers:");
	scanf("%d%d", &a,&b);
	s=a+b;
	return(s);
}
int main()
{
	int s1;
	s1=sum();
	printf("the sum is:%d",s1);
	return(0);
}

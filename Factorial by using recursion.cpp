#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return(1);
	if(n>1)
	return(n*fact(n-1));
}
int main()
{
	int n1;
	printf("Enter a number:");
	scanf("%d",&n1);
	printf("Factorial is:%d",fact(n1));
	return(0);
}

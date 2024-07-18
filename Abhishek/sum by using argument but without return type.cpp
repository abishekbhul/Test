#include<stdio.h>
void sum(int a, int b)
{
	int s;
	s=a+b;
	printf("the sum is:%d",s);
}
int main()
{
	int n1,n2;
	printf("Enter any two numbers:");
	scanf("%d%d",&n1,&n2);
	sum(n1,n2);
	return(0);
}

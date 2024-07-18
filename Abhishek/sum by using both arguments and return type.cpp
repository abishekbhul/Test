#include<stdio.h>
int sum(int a, int b)
{
	int s;
	s=a+b;
}
int main()
{
	int n1,n2,s1;
	printf("Enter any two numbers:");
	scanf("%d %d",&n1,&n2);
	s1=sum(n1,n2);
	printf("The sum is: %d",s1);
	return(0);
	} 

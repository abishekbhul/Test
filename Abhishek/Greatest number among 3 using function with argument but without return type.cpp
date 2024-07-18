#include<stdio.h>
int greatest(int a, int b, int c)
{
	int greatest;
	if(a>b && a>c)
	greatest =a;
	else if(b>a && b>c)
	greatest=b;
	else
	greatest=c;
	printf("%d is the greatest number",greatest);
	return(greatest);
}
int main()
{
	int n1,n2,n3;
	printf("Enter any three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	greatest(n1,n2,n3);
	return(0);
}

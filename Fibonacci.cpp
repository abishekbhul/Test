#include<stdio.h>
int fibo(int n)
{
	if(n==0)
	return(0);
	else if(n==1)
	return(1);
	else
	return(fibo(n-1)+fibo(n-2));
}
int main()
{
	int i,a;
	printf("Enter a numbers of terms:");
	scanf("%d",&a);
	for(i=0;i<a;++i)
	{
		printf(" %d",fibo(i));
	}
	return(0);
}

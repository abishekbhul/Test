#include<stdio.h>
int multiple()
{
	int n,i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1; i<=10;++i)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
		int main()
	{
		multiple();
		return(0);
	}


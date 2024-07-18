#include<stdio.h>
int armstrong()
{
	int n,n1,sum=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
    	r=n%10;
    	sum=sum+(r*r*r);
    	n=n/10;
	}
	if(n1==sum)
	printf("%d is armstrong.",n1);
	else
	printf("%d is not armstrong.",n1);
}
int main()
{
	armstrong();
	return(0);
}

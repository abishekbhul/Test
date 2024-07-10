#include<stdio.h>
void palindrome()
{ int n, n1, rev=0,r;
printf("Enter a number:");
scanf("%d",&n);
n1=n;
while(n>0)
{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
}
if (n1==rev)
printf("%d is palindrome",n1);
else
printf("%d is not palindrome",n1);
}
int main()
{
	palindrome();
	return(0);
}


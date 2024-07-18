#include<stdio.h>
int simpleinterest(int p, int t, int r)
{
	float Si;
	Si=(p*t*r)/100;
	printf("The Simple Interest is:%f",Si);
}
int main()
{
	int n1,n2,n3,Si;
	printf("Enter the value of P,T,R");
	scanf("%d%d%d",&n1,&n2,&n3);
	simpleinterest(n1,n2,n3);
	return(0);
}

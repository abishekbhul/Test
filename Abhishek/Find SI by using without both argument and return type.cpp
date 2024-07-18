#include<stdio.h>
int Si()
{
	float p,t,r,Si;
	printf("Enter Principle,Time and Time:");
	scanf("%f%f%f",&p,&t,&r);
	Si=(p*t*r)/100;
	printf("The Simple Intrest is:%f",Si);
	return(0);
}
int main()
{
	Si();
	return(0);
}

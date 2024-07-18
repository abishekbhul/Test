#include<stdio.h>
float SimpleIntrest()
{
	float P,T,R,Si;
	printf("Enter the value of P,T,R");
	scanf("%f%f%f",&P,&T,&R);
	Si=(P*T*R)/100;
	return(Si);
}
int main()
{
	float Si1;
	Si1=SimpleIntrest();
	printf("The SimpleIntrest is%f",Si1);
	return(0);
}

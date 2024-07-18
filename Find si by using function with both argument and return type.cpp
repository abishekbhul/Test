#include<stdio.h>
float simpleinterest(float P,float T,float R)
{
	float Si;
	Si=(P*T*R)/100;
	return(Si);
	
}
int main()
{
	float P1,T1,R1,Si1;
	printf("enter the value of P,T,R");
	scanf("%f%f%f",&P1,&T1,&R1);
	Si1=simpleinterest(P1,T1,R1);
	printf("simpleinterest is%f",Si1);
	return(0);
}


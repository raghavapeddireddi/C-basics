#include<stdio.h>
void main()
{
	int p,t;
	float r,si;
	r=7.5;
	si=1500;
	p=10000;
	t=(si*100)/(p*r);
	printf("time period for the %d amount rate of interest%f and  simple interest%f is:%d years",p,r,si,t);
}

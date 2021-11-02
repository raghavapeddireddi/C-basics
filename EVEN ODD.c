#include<stdio.h>
void main()
{
	int n,N,E,O;
	n=10;
	N=n*(n+1)/2;
	E=n*(n+1);
	O=n*n;
	printf("sum of first %d natural numbers is:%d\n",n,N);
	printf("sum of first %d even natural numbers is:%d\n",n,E);
	printf("sum of first %d odd natural numbers is:%d",n,O);	
}

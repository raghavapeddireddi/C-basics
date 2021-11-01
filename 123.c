#include<stdio.h>
void main()
{
	int a,b,sum,diff,pro,quo,rem,art;
	
	a = 20;
	b=10;
	sum=a+b;
	diff=a-b;
	pro=a*b;
	quo=a/b;
	rem=a%b;
	art=sum+diff+pro+quo+rem;
	printf("sum of %d and %d is:%d\n",a,b,sum);
	printf("difference of %d and %d is:%d\n",a,b,diff);
	printf("product of %d and %d is:%d\n",a,b,pro);
	printf("quotient of %d and %d is:%d\n",a,b,quo);
	printf("remainder of %d and %d is :%d\n",a,b,rem);
	printf("sum of arthimetic operations is:%d",art);
}
	

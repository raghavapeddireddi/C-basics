#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<100 && a>80)
	{
		printf("A");
	}
	else if(a>=70 && a<80)
	{
		printf("B");
	}
	else if(a>=60 && a<70)
	{
		printf("C");
	}
	else if(a>=50 && a<60)
	{
		printf("D");
	}
	else
	{
		printf("Fail");
	}
	
}

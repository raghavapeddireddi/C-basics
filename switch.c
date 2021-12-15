#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	b=a%2;
	switch(b)
	{
		case 0:
			printf("%d is even number",a);
			break;
		
	    case 1:
	    	printf("%d is odd number",a);
	}
}

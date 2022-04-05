#include<stdio.h>
int main()
{
	int n,r,sum=0,cb=1;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum+=r;
		cb=cb*r;
		n=n/10;
		if(sum!=cb)
		{
			printf(" not a spy number");
		}
		else
		{
			printf("spy number");
		}		
	}
}

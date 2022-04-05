#include<stdio.h>
int main()
{
	int n,r,even=0,odd=0,esum=0,osum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n/=10;
		if(r%2==0)
		{
			
			esum=esum+r;
		}
		else
		{
			
			osum=osum+r;
		}
		
	
	}	printf("%d %d",esum,osum);
}


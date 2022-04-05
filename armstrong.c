#include<stdio.h>
#include<math.h>
int main()
{
    int l=0,n,r,sum=0;
    scanf("%d",&n);
    int temp=n;
    int temp1=n;
    
	while(n>0)
	{
		n=n/10;
		l++;
	}    
//printf("%d",l);
	while(temp>0)
	{
		r=temp%10;
		sum=sum+pow(r,l);
		temp=temp/10;
	}
	if(sum==temp1)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}

#include<stdio.h>
void main()
{
	int n,sum=0,d=0;
	printf("Enter any 3 digit number");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		sum=sum+d;
	}
		printf("result %d \n",sum);
}

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 nuumbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a<=b)
		if(b<=c)
			printf("c is large");
		else
			printf("b is largest");
	else
		printf("a is largest");
}

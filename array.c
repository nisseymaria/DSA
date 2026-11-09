#include<stdio.h>
void main()
{
	int n,i,small,big;
	int arr[10];
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	big=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>big)
		{
			big=arr[i];
		}
	}
	small=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	printf("%d is large ",big);
	printf("%d is small",small);
}

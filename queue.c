#include<stdlib.h>
#include<stdio.h>
int front=-1,rear=-1;
int queue[15],data,i,size;
void enqueue()
{
	if(rear==size-1)
	{ 
		printf("\n the queue is full");
	}
	else
	{
		printf("\n ENter the data to be inserted: ");
		scanf("%d",&data);
		rear++;
		queue[rear]=data;
		printf("\n The eleemet is inserted ");
		if(front==-1)
		{
			front=0;
		}
	}
}
void dequeue()
{
	if(front==size-1)
	{ 
		printf("\n the queue is empty");
	}
	else
	{
		printf("%d is deleted ",queue[front]);
		front++;
	}
}
void display()
{
	if(front==-1)
	{
		printf("\n Queue is empty");
	}
	else
	{
		printf("\n The element are: ");
		for(i=front;i<=rear;i++)
		{
			printf("\t %d ",queue[i]);
		}
	}
}
int main()
{
	int ch;
	printf("\n Enter the array size:");
	scanf("%d",&size);
	do
		{
			printf("\n Enter your choice \n1.For enqueue \n2.For dequeue \n3.For display \n4.For exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1: enqueue();
				break;
				case 2: dequeue();
				break;
				case 3:display();
				break;
				case 4: exit(0);
				default:
				printf("invalid");
			}
		}
		while(1);
}


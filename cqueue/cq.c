#include <stdio.h>
#include<stdlib.h> 
struct item {
    int value;
    int priority;
};
 
struct item pr[100];
 
int rear = -1, front=-1,max;
 
void enqueue()
{
    int value, priority;
    if(rear==max-1)
	{
	printf("Queue is full\n");
	}
    else{
    	printf("Enter the value\n");
   	 scanf("%d",&value);
    	printf("Enter the priority\n");
    	scanf("%d",&priority);
    	rear++;
    	pr[rear].value = value;
    	pr[rear].priority = priority;
    	if(front==-1)
		front=0;
	}
}
 

void dequeue()
{
	int i, j, item_del;
	struct item temp;
	
        for(i=front;i<rear;i++)
	  for(j=i+1;j<=rear;j++)
	   if(pr[i].priority<pr[j].priority)
	   {
	     temp=pr[i];
	     pr[i]=pr[j];
	     pr[j]=temp;
	   } 
	if(front==-1){
	printf(" queue is empty\n");
		}
	else{	
	item_del=pr[front].value;
	printf("The deleted item is %d\n",item_del);
	}
	if(front==rear)
	front=rear=-1;
	else
	front=front+1;

}
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
	printf("Value\tPriority\n");
        for (i = front; i <= rear; i++)
	{
            printf("%d\t%d", pr[i].value,pr[i].priority);
        	printf("\n");
    }
}}
int main()
{
    
    int choice;
    printf("Enter maximum elements in the queueu\n");
    scanf("%d",&max);
    while (1)
    {
        printf("1.Insert element to priority queue \n");
        printf("2.Delete element from priority queue \n");
        printf("3.Display all elements of priority queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }
} 
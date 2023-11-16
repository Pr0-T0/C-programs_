#include <stdio.h>
#include <stdlib.h>
int size;
int main()
{
    int arr[100],R=-1,F=-1,te=0,ch,n,i,x,y;

    printf("Enter maximum size of queue\n");
    scanf("%d",&size);
    for(;;)
    {
        printf("\nF=%d  R=%d\n\n",F,R);
        printf("1. Add Rear\n");
        printf("2. Delete Rear\n");
        printf("3. Add Front\n");
        printf("4. Delete Front\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(R==size-1)
                {
                    printf("Queue is full");
                    
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R=(R+1);
                    arr[R]=n;
		    if(F==-1)
			F=0;	
                }
                break;

            case 2:
                if(R==-1)
                {
                    printf("Queue is empty");
                    
                }
                else
                {
                    printf("Number Deleted From Rear End = %d",arr[R]);
                    if(F==R)
			F=R=-1;
		    else
			R=R-1;
                    
                }
                break;

            case 3:
                if(F<=0)
                {
                    printf("Queue is full");
                    
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                        F=F-1;
                    arr[F]=n;
                }
                break;

            case 4:
                if(F==-1)
                {
                    printf("Queue is empty");
                    
                }
                else
                {
                    printf("Number Deleted From Front End = %d",arr[F]);
                    if(F==R)
			F=R=-1;
		    else
			F=(F+1);
                    
                }
                break;

            case 5:
                if(F==-1)
                {
                    printf("Queue is empty");
                    
                }
                else
                {
                    x=F;
                    y=R; 
                    printf("Queue is\n");
		    for(i=x; i<=y; i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    
                }
                break;

            case 6:
                exit(0);
                break;

            default:
                printf("Wrong Choice");
                
        }
    }
    return 0;
}
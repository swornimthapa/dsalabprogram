#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5

int main()
{
    	int queue[size],rear=-1,front=0,t=0,choice,n,i,x;
    	label:
        system("cls");		
        printf("****MENU****\n1. Enque element\n");
        printf("2. Deque element\n");
        printf("3. Display element\n");
        printf("4. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                if(rear==size-1)
                {
                    printf("Queue is overflow");
                    getch();	
                }
                else
                {
                    printf("Enter an element to insert: ");
                    scanf("%d",&n);
                    rear=(rear+1)%size;
                    queue[rear]=n;
                    t=t+1;
                    printf("Element is inserted ");
                    getch();
                    
                }
                goto label;
                break;

            case 2:
                if(t==0)
                {
                    printf("Queue is underflow");
                    getch();
                }
                else
                {
                    printf("Element Deleted is %d",queue[front]);
                    front=(front+1)%size;
                    t=t-1;
                    getch();
                   	
                }
                goto label;
                break;

            case 3:
                if(t==0)
                {
                    printf("Queue is empty");
                    getch();	
                }
                else
                {
                	printf("The elements in queue are: ");
                    x=front;
                    for(i=1; i<=t; i++)
                    {
                        printf(" %d ",queue[x]);
                        x=(x+1)%size;
                    }
                    
                    getch();
					
                }
                goto label;	
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid choice:");
                getch();
				goto label;	
        }
    return 0;
}

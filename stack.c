#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int main()
{
	int top=-1;
	int item[max];
	int i,choice,element;
	char ch2;
	label:
    system("cls");
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			
				if(top==max-1)
				{
					printf("\nStack Overflow");
					getch();
					goto label;
					//exit (0);
				}
				else
				{
					label2:
					printf("\nEnter the element you want to insert :");
					scanf("%d",&element);
					top++;
					item[top]=element;
					printf("\n!!!The elements is inserted!!!\n");
					getch();
				//	system("cls");
					goto label;
				}
				break;
			
		case 2:
			
				if(top == -1)
				{
					printf("\nStack Empty");
						getch();
					goto label;
				}
				else
				{
					printf("\nItem Deleted is %d ",item[top]);
					top=top-1;
				}
					getch();
				//	system("cls");
				goto label;
				break;
			
		case 3:
			
				if(top == -1)
				{
					printf("\nStack is Empty \n");
						getch();
					goto label;
				}
				else
				{
					for(i=top;i>=0;i--)
					{
						printf("\nitem is: %d",item[i]);
					}
					printf("\n");
				}
				getch();
			//	system("cls");
				goto label;
				break;
			
			case 4:
				
					exit(0);
				
		default :
		
				printf("\n!!!Invalid Choice!!!");
					getch();
				//	system("cls");
				break;
			
	}
	return 0;
}

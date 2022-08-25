#include<iostream>
#include<conio.h>
#define size 5
using namespace std;
int queue[size];
int front=0,rear=-1; 
void enqueue()
{
	if(rear==size-1)
	{
		cout<<"\n\tQUEUE OVERFLOW";
		
	}
	else{
		rear++;
		cout<<"ENTER THE NUMBER YOU WANT TO INSET IN THE QUEUE";
		cin>>queue[rear];
	}	
}
void display()
{
	int i=0;
	if(rear<front)
	{
		cout<<"\n\tQUEUE IS EMPTY";
	}
	else{
		for(i=front;i<=rear;i++)
		{
			cout<<endl<<queue[i];
		}
	}
}
void dequeue()
{
	int i=0,temp=0,x;
	x=queue[front];
	if(rear<front)
	{
		cout<<"\n\tQUEUE UNDERFLOW";
	}
	else{
		for(i=front+1;i<=rear;i++)
		{
			if(x>queue[i])
			{
				temp=i;
				x=queue[i];
			}
		}
		cout<<"\n\tTHE ITEM DELETED IS : "<<x;
		for(i=temp;i<=rear;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
		//front++;
	}
}
int main()
{
	int choice=0;
	label:
		system("cls");
	cout<<endl<<"\t\t\tMENUE";
	cout<<"\n\t\t\t1.ENQUEUE"
		<<"\n\t\t\t2.DEQUEUE"
		<<"\n\t\t\t3.DISPLAY"
		<<"\n\t\t\t4.EXIT";
	
	cout<<endl<<"\tENTER YOUR CHOICE : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			enqueue();
			cout<<endl<<"\t\tPRESS ANY KEY TO CONTINUE";
			getch();
			goto label;
			break;
		case 2:
			dequeue();
			cout<<endl<<"\t\tPRESS ANY KEY TO CONTINUE";
			getch();
			goto label;
			break;
		case 3:
			display();
			cout<<endl<<"\t\tPRESS ANY KEY TO CONTINUE";
			getch();
			goto label;
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<endl<<"\tINVALD INPUT";
			goto label;
			break;
	}
    return 0;
}

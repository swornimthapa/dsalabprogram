#include<iostream>
#include<conio.h>
#define size 5
using namespace std;
int queue[size];
int front=size-1;
int rear=size-1;	
int count=0;
void enqueue()
{
	if(count==size)
	{
		cout<<"QUEUE IF FULL";
	}
	else
	{
		rear=(rear+1)%size;
		cout<<"\n\tENTER THE ELEMENT TO BE INSERTED : ";
		cin>>queue[rear];
		count++;
	}
}
void display()
{
	int i=0;
	if(count==0)
	{
		cout<<"QUEUE IS EMPTY";
	}
	else
	{
		for(i=(front+1)%size;i!=rear;i=(i+1)%size)	
		{
			cout<<endl<<queue[i];
		}
		cout<<endl<<queue[rear];
		
	}
}
void dequeue()
{
	if(count==0)
	{
		cout<<"QUEUE IS EMPTY";
	}
	else
	{
		front=(front+1)%size;
		cout<<"THE ITEM DELETED IS : "<<queue[front];
		count--;
		
	}
}

int main()
{
	int choice=0;
	do
	{
	
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
			
			break;
		case 2:
			dequeue();
			cout<<endl<<"\t\tPRESS ANY KEY TO CONTINUE";
			getch();
		
			break;
		case 3:
			display();
			cout<<endl<<"\t\tPRESS ANY KEY TO CONTINUE";
			getch();
			
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<endl<<"\tINVALD INPUT";
			break;
	}
	}while(1);
    return 0;
}


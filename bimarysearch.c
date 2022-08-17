#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n=0,l=0,h=0,i=0,mid,choice=0;
	char ch;
	int a[20];
	int flag=0,key;
	label:
	printf("\nEnter the size of array: ");
	scanf("%d",&n);
	if(n>20)
	{
		printf("size of array should be equal or less than 20");
		goto label;
		exit(0);
	}
	printf("\n\t\tMENUE");
	printf("\n\t\t1.ascending");
	printf("\n\t\t1.descending");
//	printf("chose in which order you are going to enter the elements: ");
//	scanf("%d",&choice);
//	switch(choice)
	printf("\nEnter %d sorted element in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		flag=0;
		
		l=0;
		h=n-1;
		mid=0;
		key=0;
		printf("Enter the item to be searched: ");
		scanf("%d",&key);
		while(l<=h)
		{
			mid=(l+h)/2;
			if(a[mid]<key)
			{
				l=mid+1;
			}
			else if(a[mid]>key)
			{
				h=mid-1;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("The search is successful\n");
			printf("The position is: %d",mid+1);
		}
		else
		{
			printf("Search unsuccessful");
			printf("The position is: %d",mid+1);
		}
		printf("\ndo you want to add search another element?(enter y for yes and n for no) : ");
		scanf("%s",&ch);
		fflush(stdin);	
	}while(ch=='y' || ch=='Y');
	return 0;
}

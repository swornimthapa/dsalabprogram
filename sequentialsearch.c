#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n=0,i=0,key=0,flag,a[20];
	char ch;
	label:
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	if(n>20)
	{
		printf("size of array should be equal or less than 20");
		goto label;
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d elements in array: ",i+1);
		scanf("%d",&a[i]);
	}
	do
	{
		flag=0;
		printf("Enter the element to search: ");
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
				flag=1;
				printf("The position is: %d",i+1);
				break;
			}
		}
		if(flag!=1)
		{
			printf("Search unsuccessful");
		}
		printf("\ndo you want to add search another element?(enter y for yes and n for no) : ");
		scanf("%s",&ch);
	}while(ch=='y' || ch=='Y');
	
	return 0;
}
